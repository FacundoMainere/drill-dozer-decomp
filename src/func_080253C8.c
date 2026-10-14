#include "types.h"

void func_080253C8(u8 *p, u8 *q) {
    p += 124;
    *(u16 *)(p + 12) = *q << 4;
}
