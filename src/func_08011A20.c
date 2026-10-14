#include "types.h"

extern u32 func_08011720(u32);
extern void func_08011A1C(u32, u32);

void func_08011A20(u32 a, u32 b) { func_08011A1C(func_08011720(a), b); }
