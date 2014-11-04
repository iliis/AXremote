// Copyright (c) 2013 AXSEM AG
// All rights reserved.

#ifndef BUFFER_H_INCLUDED
#define BUFFER_H_INCLUDED

#include <libmftypes.h>
#include <string.h> // for memcpy

#define BUFFER_SIZE 256  // max 256 (8bit), must be power of two
// can be less than uart buffer size
#define BUFFER_MASK (BUFFER_SIZE-1) // one less than BUFFER_SIZE

#define BUFFER_INCREMENT(ctr) do { (ctr) = ((ctr) + 1) & BUFFER_MASK; } while (0)
#define BUFFER_DECREMENT(ctr) do { (ctr) = ((ctr) - 1) & BUFFER_MASK; } while (0)

#if BUFFER_SIZE > 256
	#error BUFFER_SIZE cannot be bigger than 2^8 as we are working on a 8bit platform.
#endif

// check if buffer size is power of two
#if (BUFFER_SIZE & (BUFFER_SIZE-1)) != 0
    #error BUFFER_SIZE is not a power of two.
#endif

// TODO: move start and end into __data?
struct Buffer {
    uint8_t read;
    uint8_t write; // exclusive, data[end] is always empty
    uint8_t data[BUFFER_SIZE];
};

/// initializes a buffer
void buffer_reset(struct Buffer __xdata * const buf);

/// write a byte into buf if it isn't full
/// returns the number of bytes written (eg. 1 if successfull, 0 on error)
uint8_t __reentrantb buffer_write(struct Buffer __xdata * const buf, const uint8_t val) __reentrant;

/// write an array into buf (as much as possible if not enough space)
/// returns the number of bytes written (eg. len if successfull, 0 on error)
uint8_t __reentrantb buffer_write_arr(struct Buffer __xdata * const buf, const __xdata uint8_t * const arr, const uint8_t len) __reentrant;

/// read a byte from buf and deletes it
uint8_t __reentrantb buffer_read (struct Buffer __xdata * const buf) __reentrant;

/// calculate the amount of empty bytes in buf
uint8_t __reentrantb buffer_free (struct Buffer __xdata * const buf) __reentrant;

/// calculate the amount of data stored in buf
uint8_t __reentrantb buffer_count(struct Buffer __xdata * const buf) __reentrant;

#define buffer_empty(buf) ((buf)->write == (buf)->read)

#if BUFFER_MASK == 0xFF
	#define buffer_full(buf)  ((buf)->write+1 == (buf)->read)
#else
	#define buffer_full(buf)  ((((buf)->write+1) & BUFFER_MASK) == (buf)->read)
#endif

/// copy complete buffer into one continuous piece of memory (buffer is empty afterwards)
void    buffer_copy(struct Buffer __xdata * buf, uint8_t __xdata * dest, uint8_t destsize);
/// same as buffer_copy, but doesn't modify buffer. returns number of bytes copied.
uint8_t buffer_pocke_copy(const struct Buffer __xdata * buf, uint8_t __xdata * dest, uint8_t destsize);

/// checks if idx is part of buf
uint8_t buffer_contains(const struct Buffer __xdata * buf, uint8_t idx);

/// replaces all occurences of 'needle' in 'haystack' with 'replaceby'
void buffer_replace(struct Buffer __xdata *  const haystack, const uint8_t needle, const uint8_t replaceby);

#endif // BUFFER_H_INCLUDED
