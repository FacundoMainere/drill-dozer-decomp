#include "types.h"

extern u32 func_08011720(u32);
extern void func_0802FBA0(u32, u32);

void func_0802FBB4(u32 a, u32 b) { func_0802FBA0(func_08011720(a), b); }
