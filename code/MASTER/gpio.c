#include "gpio.h"

__xdata struct wtimer_callback gpio_button0_pressed_handle;
__xdata struct wtimer_callback gpio_button1_pressed_handle;
__xdata struct wtimer_callback gpio_ftdi_interrupt_handle;

void gpio_irq(void) __interrupt(INT_GPIO)
{
    // prevent more GPIO interrupts
    IE_3 = 0;

    // TODO: debounce buttons!

    if ((PINCHGA & 0x01) && BUTTON0_STATE()) {
        wtimer_add_callback(&gpio_button0_pressed_handle);
    }

    if ((PINCHGA & 0x02) && BUTTON1_STATE()) {
        wtimer_add_callback(&gpio_button1_pressed_handle);
    }

    if ((PINCHGC & 0x10) && !(PINC & 0x10)) {
        wtimer_add_callback(&gpio_ftdi_interrupt_handle);
    }

    if (PINCHGB & 0x08) {
        ir_rx_pin_change_irq();
    }

    led1_set(BUTTON0_STATE());
    led2_set(BUTTON1_STATE());

    // enable GPIO interrupts again
    IE_3 = 1;
}


void init_gpio()
{
    INTCHGA |= 0x03; // enable GPIO interrupts for buttons
    // FTDI interrupts on C4 are enabled in ftdi_spi_init()
    IE_3 = 1; // enable GPIO interrupts for real(tm)

    gpio_button0_pressed_handle.handler = &gpio_button0_pressed;
    gpio_button1_pressed_handle.handler = &gpio_button1_pressed;
    gpio_ftdi_interrupt_handle.handler  = &ftdi_handle_interrupt;
}
