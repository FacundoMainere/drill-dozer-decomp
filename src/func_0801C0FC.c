#include "types.h"

extern u32 func_080128C8(u8);

u32 func_0801C0FC(u8 *p) {
    u8 *q = *(u8 **)(p + 8);
    u32 r;
    if (q != 0)
        r = func_080128C8(q[9]);
    else
        r = 0xFF;
    return r;
}
