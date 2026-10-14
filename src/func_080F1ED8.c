#include "types.h"

extern u32 func_080F1490(u32, u32);

u32 func_080F1ED8(u32 a) { return func_080F1490(a, *(u32 *)(a + 0x2c)); }
