#include "types.h"

extern u8 func_08019B88(void);

u32 func_080AD204(void) {
    if (func_08019B88() == 0)
        return 2;
    return 0;
}
