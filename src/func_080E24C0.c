#include "types.h"

void func_080E24C0(u8 *p, u16 m) {
    *(u16 *)(p + 0x2C) &= m;
    *(u16 *)(p + 0x2E) &= m;
}
