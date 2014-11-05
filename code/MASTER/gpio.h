#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

#include <ax8052f143.h>
#include <libmftypes.h>
#include <libmfwtimer.h>

#include "../COMMON/leds.h"
#include "infrared.h"
#include "usb_ftdi_isr.h"

// TODO: add init function/macro here for sdcc_external_startup

#define BUTTON0_STATE() (PINA & 0x01 ? 1 : 0)
#define BUTTON1_STATE() (PINA & 0x02 ? 1 : 0)

// to record infrared signals
extern void gpio_irq(void) __interrupt(INT_GPIO);

void init_gpio();

// implement these in main to handle button presses
extern void gpio_button0_pressed(struct wtimer_callback __xdata *desc);
extern void gpio_button1_pressed(struct wtimer_callback __xdata *desc);


#endif // GPIO_H_INCLUDED
