#include "types.h"

extern u8 func_080126B4(u16);
extern u32 func_080128C8(u8);

u32 func_08012904(u16 a) { return func_080128C8(func_080126B4(a)); }
