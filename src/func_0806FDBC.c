#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_0806FDBC(u8 *p, u32 *q, u8 v) {
    p[0x78] = v;
    func_080057F0(*q, 0, 0);
}
