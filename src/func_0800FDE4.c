#include "types.h"

extern u32 func_08007F1C(u32);

u32 func_0800FDE4(u8 *p) { return func_08007F1C(*(u32 *)(p + 0x34)); }
