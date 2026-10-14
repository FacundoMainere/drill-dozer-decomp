#include "types.h"

extern u32 func_08011720(u32);
extern void func_080213F4(u32, u32);

void func_0802140C(u32 a, u32 b) { func_080213F4(func_08011720(a), b); }
