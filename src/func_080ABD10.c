#include "types.h"

void func_080ABD10(u8 *a, u32 b) {
    u32 *p = (u32 *)(a + 124);
    p[9] = b;
    ((u8 *)p[5])[1] = b;
}
