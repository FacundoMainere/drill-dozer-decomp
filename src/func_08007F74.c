#include "types.h"

extern u8 gUnk_02025B68[];

void func_08007F74(u8 *p, u8 i) { *(u8 **)(p + 0x34) = gUnk_02025B68 + i * 15000; }
