#include "types.h"

extern u8 *func_080214D8(u8 *p);

void func_08021518(u8 *p, u32 a, u32 b) {
    u8 *q = func_080214D8(p);
    *(u16 *)(q + 20) = a;
    *(u16 *)(q + 22) = b;
}
