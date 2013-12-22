
#include "display_com0.h"

#include <ax8052f143.h>
#include <libmf.h>
#include <libmfuart.h>
#include <libmfuart0.h>

static const __code char *lcd_border=
"\x1b[0;8;44;30m\x1b[1;1f"
"******************\x1b[2;1f"
"*                *\x1b[3;1f"
"*                *\x1b[4;1f"
"******************\x1b[5;1f\x1b[37m\x1b[?25l";

uint8_t __xdata cmd[8] = {0x1b, '[', 0xFF, ';', 0xFF,0xFF, 'f', 0};
uint8_t __xdata row;
uint8_t __xdata column;

__reentrantb void com0_portinit(void) __reentrant
{
    PALTB |= 0x11;
    DIRB |= (1<<0) | (1<<4);
    DIRB &= (uint8_t)~(1<<5);
    PINSEL &= (uint8_t)~((1<<0) | (1<<1));

    uart_timer0_baud(CLKSRC_SYSCLK, 115200, 20000000UL);
    uart0_init(0, 8, 1);
}

__reentrantb void com0_init(void) __reentrant
{
    uart_timer0_baud(CLKSRC_SYSCLK, 115200, 20000000UL);
    uart0_init(0, 8, 1);

    com0_writestr(lcd_border);
    com0_setpos(0);
}

__reentrantb void com0_writestr2(const char* msg)  __reentrant
{
    uart0_writestr(msg);
}

__reentrantb void com0_newline(void) __reentrant
{
    if (row < 3)
        ++row;
    column = 2;
    cmd[2] = row + '0';
    cmd[4] = '0';
    cmd[5] = '2';
    uart0_writestr(cmd);
}

__reentrantb void com0_setpos(uint8_t v) __reentrant
{
    //http://www.termsys.demon.co.uk/vtansi.htm
    //Force Cursor Position	<ESC>[{ROW};{COLUMN}f
    row = (v >> 6) + 2;
    column = (v & 0x3F) + 2;
    cmd[2] = row + '0';
    cmd[4] = column / 10 + '0';
    cmd[5] = column % 10 + '0';
    uart0_writestr(cmd);
}

__reentrantb void com0_writestr(const char *msg) __reentrant
{
    for (;;) {
        char ch = *msg;
        if (!ch)
            break;
        com0_tx(ch);
        msg++;
    }
    //com0_allow_swreset();
}

__reentrantb void com0_tx(uint8_t val)  __reentrant
{
    if (val == '\n')
        com0_newline();
    else
        uart0_tx(val);
}

__reentrantb void com0_clear(uint8_t pos, uint8_t len) __reentrant
{
    com0_setpos(pos);
    if (!len)
        return;
    do {
        com0_tx(' ');
    } while (--len);
}
