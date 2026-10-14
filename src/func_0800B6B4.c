#include "types.h"

struct S {
    u8 pad[0xDE];
    u16 a[8];
};

u16 func_0800B6B4(struct S *p, u32 i) { return p->a[i]; }
