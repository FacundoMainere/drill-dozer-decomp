#include "types.h"

void func_080F8440(u32 a, u8 *b) {
    u8 *p = *(u8 **)(b + 64);
    b[31] = *p;
    *(u8 **)(b + 64) = p + 1;
}
