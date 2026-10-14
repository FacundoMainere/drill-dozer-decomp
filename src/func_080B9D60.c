#include "types.h"

void func_080B9D60(u8 *p) {
    *(u16 *)(p + 24) = 0;
    *(s32 *)(p + 20) = *(s32 *)(p + 4) >> 8;
    *(u16 *)(p + 26) = 1;
}
