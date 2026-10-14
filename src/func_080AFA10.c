#include "types.h"

void func_080AFA10(u8 *p, u16 m) {
    *(u16 *)(p + 44) &= m;
    *(u16 *)(p + 46) &= m;
}
