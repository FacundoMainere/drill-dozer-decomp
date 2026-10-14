#include "types.h"

struct T {
    u8 pad[0x16];
    u16 h;
};

struct S {
    u32 a;
    struct T *t;
    u8 pad[10];
    u16 h;
    u8 pad2[0x1C];
    u32 z;
};

void func_080BC0A8(struct S *s) {
    s->h = s->t->h;
    s->z = 0;
}
