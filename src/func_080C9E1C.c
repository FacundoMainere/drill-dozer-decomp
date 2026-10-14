#include "types.h"

struct S {
    struct S *p;
    u8 pad4[0x10];
    u16 a;
    u16 b;
    u8 pad18[0x2E];
    u16 c;
    u8 pad48[2];
    u16 d;
};

void func_080C9E1C(struct S *a, struct S *b) {
    b->p->a = a->c;
    b->p->b = a->d;
}
