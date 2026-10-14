#include "types.h"

extern u32 func_080F1490(u8 *, u32);

u32 func_080F1E2C(u8 *a) { return func_080F1490(a, *(u32 *)(a + 0x2c)); }
