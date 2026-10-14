#include "types.h"

extern u8 *func_08011720(u32);

void func_080117FC(u32 a, u32 b) { *(u32 *)(func_08011720(a) + 16) |= b; }
