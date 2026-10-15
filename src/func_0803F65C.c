#include "types.h"

struct B {
    u8 pad[0xA4];
    u32 arr[1];
};

struct C {
    u8 a;
    u8 b;
};

struct A {
    u32 pad0;
    u32 idx;
    u8 pad8[0x54];
    struct C *c;
    u8 pad60[8];
    struct B *b;
};

u32 func_0803F65C(struct A *p) {
    p->b->arr[p->idx] = 1;
    p->c->b = 1;
    return 0;
}
