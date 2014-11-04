#include "buffer.h"

///////////////////////////////////////////////////////////////////////////////
// uint8_t buffer_empty(struct Buffer const * const buf) {return buf->write == buf->read;}
// uint8_t buffer_full (struct Buffer const * const buf) {return ((buf->write+1) & BUFFER_MASK) == buf->read;}
///////////////////////////////////////////////////////////////////////////////
void buffer_reset(struct Buffer __xdata * const buf)
{
    buf->read  = 0;
    buf->write = 0;
}
///////////////////////////////////////////////////////////////////////////////
uint8_t __reentrantb buffer_read (struct Buffer __xdata * const buf) __reentrant
{
    if (!buffer_empty(buf)) {
        uint8_t d = buf->data[buf->read];
		BUFFER_INCREMENT(buf->read);
        return d;
    }

    return '\0'; // TODO: Handle error.
}
///////////////////////////////////////////////////////////////////////////////
/// returns the number of bytes written (eg. 1 if successfull, 0 on error)
uint8_t __reentrantb buffer_write(struct Buffer __xdata * const buf, const uint8_t val) __reentrant
{
    if (!buffer_full(buf)) {
        buf->data[buf->write] = val;
		BUFFER_INCREMENT(buf->write);
		return 1;
    } else
		return 0;
}
///////////////////////////////////////////////////////////////////////////////
/// returns the number of bytes written (eg. len if successfull, 0 on error)
uint8_t __reentrantb buffer_write_arr(struct Buffer __xdata * const buf, const __xdata uint8_t * const arr, const uint8_t len) __reentrant
{
    uint8_t i = 0;
    for (; i < len; ++i) {
        if(!buffer_write(buf, arr[i])) break;
    }
	return i;
}
///////////////////////////////////////////////////////////////////////////////
uint8_t __reentrantb buffer_free(struct Buffer __xdata * const buf) __reentrant
{
    // one byte alwasy remains empty (otherwise emtpy and full buffers could not be distinguished
#if BUFFER_MASK == 0xFF
	return buf->read - buf->write - 1;
#else
    if (buf->read <= buf->write) { // no wraparound
        return BUFFER_SIZE - (buf->write - buf->read) - 1;
    } else {
        return buf->read - buf->write - 1;
    }
#endif
}
///////////////////////////////////////////////////////////////////////////////
uint8_t __reentrantb buffer_count(struct Buffer __xdata * const buf) __reentrant
{
#if BUFFER_MASK == 0xFF
	return buf->write - buf->read;
#else
    if (buf->read <= buf->write) { // no wraparound
        return buf->write - buf->read;
    } else {
        return BUFFER_SIZE - buf->read + buf->write;
    }
#endif
}
///////////////////////////////////////////////////////////////////////////////
void buffer_copy(struct Buffer __xdata * const buf, uint8_t __xdata * dest, uint8_t destsize)
{
    while (!buffer_empty(buf) && destsize > 0) {
        *(dest++) = buffer_read(buf);
        --destsize;
    }
    // TODO: add error (dest too small)
}
///////////////////////////////////////////////////////////////////////////////
uint8_t buffer_pocke_copy(const struct Buffer __xdata * buf, uint8_t __xdata * dest, uint8_t destsize)
{
    if (buf->read <= buf->write) {
		// no wraparound, data is already continuous
        uint8_t n = buf->write - buf->read;
        if (n > destsize) n = destsize;

        memcpy(dest, buf->data + buf->read, n);

        return n;

    } else {
        uint8_t n = BUFFER_SIZE - buf->read;
        if (n > destsize) n = destsize;

        memcpy(dest, buf->data + buf->read, n);

        destsize -= n;
        dest += n;

        if (destsize > buf->write)
			destsize = buf->write;

		memcpy(dest, buf->data, destsize);
		return n + destsize;
    }
}
///////////////////////////////////////////////////////////////////////////////
uint8_t buffer_contains(const struct Buffer __xdata * buf, uint8_t idx)
{
    if (buf->read <= buf->write) {
        return idx >= buf->read && idx <  buf->write;
    } else {
        return idx >= buf->read || idx <  buf->write;
    }
}
///////////////////////////////////////////////////////////////////////////////
void buffer_replace(struct Buffer __xdata * const haystack, const uint8_t needle, const uint8_t replaceby)
{
    uint8_t i = haystack->read;
    while (i != haystack->write) {

        if (haystack->data[i] == needle)
            haystack->data[i] =  replaceby;

        i++;
    }
}
///////////////////////////////////////////////////////////////////////////////
