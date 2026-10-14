#include "types.h"

extern u8 func_08019B88(void);

u32 func_0800AA28(void) {
    if (func_08019B88() != 0)
        return 0;
    return 1;
}
