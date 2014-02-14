#include "keymatrix.h"

///////////////////////////////////////////////////////////////////////////////
// rows are driven, cols are measured (Port B)
// one row is set to GND, the others are held floating
// columns have pull-ups enabled

uint8_t scan_keymatrix() {
    uint8_t val = 0, i = 0;

    INIT_COL();
    // give everything time to settle
    // (we have quite a high capacitive load due to long wires)
    SHORT_SLEEP();

// for(i = 0 to 5)
#define F(i)    \
    do {    \
        ALL_ROWS_Z();   \
        DRIVE_ROW(i);   \
        SHORT_SLEEP(); \
        val = READ_COL();   \
        if (val)    \
            return DISC_LOG(val) + i*6; \
    } while(0);

    FOR_0_TO_5();

#undef F

    return 0; // no key pressed
}
///////////////////////////////////////////////////////////////////////////////
