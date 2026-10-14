#include "types.h"

void func_080677B8(u8 *p, s16 x, s16 y) {
    *(s16 *)(p + 32) = x;
    *(s16 *)(p + 34) = y;
    *(u32 *)(p + 36) = *(u32 *)(p + 32);
}
