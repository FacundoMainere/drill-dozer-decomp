#include "types.h"
void func_080920B8(u8 *p, u16 *s) {
    u16 *q = (u16 *)(p + 124);
    q[0] = *s;
    q[1] = *(u16 *)(p + 36);
}
