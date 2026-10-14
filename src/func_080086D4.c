#include "types.h"

extern u8 gUnk_020239D8[][0x800];
extern void func_0800212C(u32, u8 *);

void func_080086D4(u8 a) { func_0800212C(a, gUnk_020239D8[a]); }
