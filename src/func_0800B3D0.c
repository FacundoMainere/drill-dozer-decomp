#include "types.h"

struct S {
    u8 pad[9];
    u8 a : 1;
    u8 b : 1;
};

u32 func_0800B3D0(struct S *p) { return p->b; }
