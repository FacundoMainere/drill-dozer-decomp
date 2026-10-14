#include "types.h"

void func_080DC654(u8 *p, u8 v) {
    u16 z = 0;
    p[6] = v;
    *(u16 *)(p + 8) = z;
    p[7] = 0;
}
