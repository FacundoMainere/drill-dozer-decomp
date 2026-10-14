#include "types.h"

extern u8 func_08015C38(u32, s16, s16);

u8 func_0800F920(u8 *p, s16 x, s16 y) { return func_08015C38(*(u32 *)(p + 0x34), x, y); }
