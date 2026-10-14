#include "types.h"

extern u32 func_08011720(u32, u32);
extern void func_08011B5C(u32, u32);

void func_08011B60(u32 a, u32 b) { func_08011B5C(func_08011720(a, b), b); }
