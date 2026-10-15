#include "types.h"

union U {
    u32 w;
    struct {
        u16 lo;
        u16 hi;
    } h;
};

struct S {
    u8 pad[0x24];
    u16 x;
    u16 y;
    u8 pad2[0x1C];
    union U a;
    union U b;
};

void func_0801CECC(struct S *p) {
    p->a.w = 0;
    p->b.w = 0;
    p->a.h.hi = p->x;
    p->b.h.hi = p->y;
}
