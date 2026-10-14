#include "types.h"

extern u32 func_08007ED8(u32);

u32 func_0800FDD8(u8 *p) { return func_08007ED8(*(u32 *)(p + 0x34)); }
