#include "types.h"

u32 func_080D6454(u8 *p) {
    u32 r;
    p += 124;
    r = p[16];
    r &= 1;
    return r;
}
