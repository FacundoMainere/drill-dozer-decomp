#include "types.h"

u32 func_080BCA48(u8 *p) {
    u32 r = 0;
    if (*(u16 *)(p + 64) > 2)
        r = 1;
    return r;
}
