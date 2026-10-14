#include "types.h"

void func_0806FDA8(u8 *p, u32 a, u8 c) {
    u8 *q = p + 0x75;
    q[0] = 0;
    q[-1] = 0;
    q += 1;
    *q = c;
}
