#include "types.h"

extern void func_08001D1C(u8, u32, u32);

void func_080BC710(u32 a, u8 *p) { func_08001D1C(p[0], *(u32 *)(p + 4), 1); }
