#include "keymatrix.h"


uint8_t scan_keymatrix() {
    uint8_t val = 0, i = 0;

    INIT_COL();


#define F(i)    \
    do {    \
        ALL_ROWS_Z();   \
        DRIVE_ROW(i);   \
        val = READ_COL();   \
        if (val)    \
            return DISC_LOG(val) + i*6; \
    } while(0);

    //FOR_0_TO_5

#undef F


    ALL_ROWS_Z();
    DRIVE_ROW(0);
    delay_ms(1);
    val = READ_COL();
    if (val) return DISC_LOG(val);

    ALL_ROWS_Z();
    DRIVE_ROW(1);
    delay_ms(1);
    val = READ_COL();
    if (val) return DISC_LOG(val) + 10; /*

    ALL_ROWS_Z();
    DRIVE_ROW(2);
    val = READ_COL();
    if (val) return DISC_LOG(val) + 12;

    ALL_ROWS_Z();
    DRIVE_ROW(3);
    val = READ_COL();
    if (val) return DISC_LOG(val) + 18;*/

    return 0; // no key pressed
}
