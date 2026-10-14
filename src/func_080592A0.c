#include "types.h"
struct B {
    u8 pad[20];
    u16 a;
    u16 b;
    u8 pad2[12];
    u16 c;
    u16 d;
};
struct A {
    u32 x;
    struct B *p;
    u32 y[2];
    struct B *q;
};
void func_080592A0(struct A *s) {
    s->p->a = s->q->c;
    s->p->b = s->q->d;
}
