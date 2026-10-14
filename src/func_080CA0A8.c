#include "types.h"

struct S {
    u8 pad[0x14];
    u16 x;
    u16 y;
};

struct A {
    u8 pad[0x46];
    u16 x;
    u16 pad2;
    u16 y;
};

void func_080CA0A8(struct A *a, struct S **b) {
    (*b)->x = a->x;
    (*b)->y = a->y;
}
