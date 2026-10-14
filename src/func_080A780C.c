#include "types.h"

struct S {
    u8 pad[0x1A];
    u16 f;
};

void func_080A780C(struct S *p) { p->f &= 0xFFF8; }
