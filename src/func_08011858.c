#include "types.h"

extern u32 func_08011720(u32);
extern void func_0801184C(u32, u32);

void func_08011858(u32 a, u32 b) { func_0801184C(func_08011720(a), b); }
