#include "types.h"

extern u32 func_080360E8(u8 *);

void func_08036108(u8 *p) { *(u32 *)(p + 0x90) = func_080360E8(p); }
