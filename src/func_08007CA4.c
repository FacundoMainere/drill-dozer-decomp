#include "types.h"

void func_08007CA4(u8 **a, u16 *b) {
    u8 *p = *a;
    b[0] = *(u16 *)(p + 22);
    b[1] = *(u16 *)(p + 26);
    b[2] = *(u16 *)(p + 20);
    b[3] = *(u16 *)(p + 24);
}
