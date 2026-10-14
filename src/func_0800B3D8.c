#include "types.h"

struct S {
    u8 pad[9];
    u8 a : 2;
    u8 b : 1;
};

void func_0800B3D8(struct S *p, u32 v) { p->b = v; }
