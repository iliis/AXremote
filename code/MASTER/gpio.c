#include "gpio.h"

__xdata struct wtimer_callback gpio_button0_pressed_handle;
__xdata struct wtimer_callback gpio_button1_pressed_handle;

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

    if (PINCHGB & 0x08)
        // TODO: implement this more efficient
        //       -> move main functionality into main-loop (add handler)
        handle_pin_change();

    led0_set(PINB_3 == 0);
    led1_set(BUTTON0_STATE());
    led2_set(BUTTON1_STATE());

    // enable GPIO interrupts again
    IE_3 = 1;
}


void init_gpio()
{
    // enable GPIO interrupts for buttons
    INTCHGA |= 0x03;
    IE_3 = 1;

    gpio_button0_pressed_handle.handler = &gpio_button0_pressed;
    gpio_button1_pressed_handle.handler = &gpio_button1_pressed;
}
