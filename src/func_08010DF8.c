#include "types.h"

extern u8 *func_08011720(u32);

void func_08010DF8(u32 a, u32 b) { *(u32 *)(func_08011720(a) + 0x4F4) = b; }
