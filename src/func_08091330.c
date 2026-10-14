#include "types.h"
void func_08091330(u8 *p, u32 v) {
    u32 *q = (u32 *)(p + 124);
    q[2] = q[1];
    q[1] = v;
}
