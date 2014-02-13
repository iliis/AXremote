#include "keymatrix.h"


uint8_t scan_keymatrix() {
    uint8_t val = 0, i = 0;

    INIT_COL();

    // for(i = 0 to 5)

#define F(i)    \
    do {    \
        ALL_ROWS_Z();   \
        DRIVE_ROW(i);   \
        delay_ms(1); \
        val = READ_COL();   \
        if (val)    \
            return DISC_LOG(val) + i*6; \
    } while(0);

    FOR_0_TO_5

#undef F

    return 0; // no key pressed
}
