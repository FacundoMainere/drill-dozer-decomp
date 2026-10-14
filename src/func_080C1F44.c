#include "types.h"

u32 func_080C1F44(u8 *p, u32 i) {
    u32 k = i >> 3;
    u32 s = 7 & ~i;
    return (p[k] >> s) & 1;
}
