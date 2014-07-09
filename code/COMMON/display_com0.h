#ifndef DISPLAY_COM0_H
#define DISPLAY_COM0_H

#include <libmf.h>

// implementation
#if defined(USE_LCD)
    #define display_portinit          lcd2_portinit
    #define display_init              lcd2_init
    #define display_setpos            lcd2_setpos
    #define display_writestr          lcd2_writestr
    #define display_writenum16        lcd2_writenum16
    #define display_writehex16        lcd2_writehex16
    #define display_writenum32        lcd2_writenum32
    #define display_writehex32        lcd2_writehex32
    #define display_tx                lcd2_tx
    #define display_clear             lcd2_clear
    #define display_wait_txdone       lcd2_wait_txdone
    #define display_txidle            lcd2_txidle
#elif defined(USE_COM0)
    #define display_portinit          com0_portinit
    #define display_init              com0_init
    #define display_setpos            com0_setpos
    #define display_writestr          com0_writestr
    #define display_writenum16        uart0_writenum16
    #define display_writehex16        uart0_writehex16
    #define display_writenum32        uart0_writenum32
    #define display_writehex32        uart0_writehex32
    #define display_tx                com0_tx
    #define display_clear             com0_clear
    #define display_wait_txdone       uart0_wait_txdone
    #define display_txidle            uart0_txidle
#else
    #define display_portinit()        do { } while (0)
    #define display_init()            do { } while (0)
    #define display_setpos(v)         do { } while (0)
    #define display_writestr(msg)     do { } while (0)
    #define display_writenum16(v,d,f) do { } while (0)
    #define display_writehex16(v,d,f) do { } while (0)
    #define display_writenum32(v,d,f) do { } while (0)
    #define display_writehex32(v,d,f) do { } while (0)
    #define display_tx(v)             do { } while (0)
    #define display_clear(p,l)        do { } while (0)
    #define display_wait_txdone()     do { } while (0)
    #define display_txidle()          (1)
#endif

extern __reentrantb void com0_inituart0(void) __reentrant;
extern __reentrantb void com0_portinit(void) __reentrant;
extern __reentrantb void com0_init(void) __reentrant;
extern __reentrantb void com0_setpos(uint8_t v) __reentrant;
extern __reentrantb void com0_writestr(const char __generic * msg) __reentrant;
extern __reentrantb void com0_tx(uint8_t val) __reentrant;
extern __reentrantb void com0_clear(uint8_t pos, uint8_t len) __reentrant;

#endif // DISPLAY_COM0_H
