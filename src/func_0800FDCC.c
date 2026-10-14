#include "types.h"

extern u32 func_08007C4C(u32);

u32 func_0800FDCC(u8 *p) { return func_08007C4C(*(u32 *)(p + 0x34)); }
