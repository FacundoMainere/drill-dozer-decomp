#include "types.h"

extern u8 func_080126B4(u16);
extern u32 func_08012810(u8);

u32 func_080128B0(u16 a) { return func_08012810(func_080126B4(a)); }
