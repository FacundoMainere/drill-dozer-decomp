#include "types.h"

extern u32 func_08011720(u32);
extern void func_0802FF2C(u32, u32, u32);

void func_0802FF64(u32 a, u32 b) { func_0802FF2C(func_08011720(a), b, 0); }
