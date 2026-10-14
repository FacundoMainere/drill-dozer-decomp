#include "types.h"

extern u32 func_08011720(u32);
extern void func_080215E0(u32, u32);

void func_080215FC(u32 a, u32 b) { func_080215E0(func_08011720(a), b); }
