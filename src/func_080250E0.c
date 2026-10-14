#include "types.h"

extern u8 gUnk_08241094[][2];

void func_080250E0(u8 *p) {
    u8 *q = p + 124;
    *(u16 *)(q + 12) = gUnk_08241094[p[24]][0] << 4;
}
