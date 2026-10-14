#include "types.h"

void func_080A7800(u16 *p) {
    u32 b = p[13];
    u32 t = 7;
    t |= b;
    p[13] = t;
}
