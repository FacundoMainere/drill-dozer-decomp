#include "types.h"

extern u32 func_080F1490(u8 *, u32);

u32 func_080F1EBC(u8 *p) { return func_080F1490(p, *(u32 *)(p + 44)); }
