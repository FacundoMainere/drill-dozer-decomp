#include "types.h"

void func_08095A90(u8 *p, u32 v) {
    u8 *q = p + 0x76;
    u32 z = 0;
    *q = v;
    p[0x74] = z;
    p[0x75] = z;
}
