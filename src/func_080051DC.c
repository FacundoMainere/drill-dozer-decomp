#include "types.h"

extern u8 gUnk_03000A20[];
extern u32 func_080051A8(u8 *);

u16 func_080051DC(void) { return func_080051A8(gUnk_03000A20); }
