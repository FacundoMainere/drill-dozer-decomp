#include "types.h"

void func_080D6460(u8 *p, u32 a, u8 b) {
    p += 0x7C;
    *(u32 *)(p + 12) = a;
    p[17] = b;
}
