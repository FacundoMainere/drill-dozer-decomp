#include "types.h"

extern u32 func_08011720(u32);
extern void func_0802E55C(u32, u32);

void func_0802E57C(u32 a, u32 b) { func_0802E55C(func_08011720(a), b); }
