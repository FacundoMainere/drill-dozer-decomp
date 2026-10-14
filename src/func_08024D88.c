#include "types.h"

void func_08024D88(u8 *p, u8 *q) {
    p += 0x7C;
    *(u16 *)(p + 12) = *q << 4;
}
