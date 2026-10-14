#include "types.h"

extern u32 func_08007F48(u32);

u32 func_0800FDF0(u8 *p) { return func_08007F48(*(u32 *)(p + 0x34)); }
