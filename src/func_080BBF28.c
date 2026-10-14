#include "types.h"

struct S {
    u8 pad[24];
    s32 v;
    u8 pad2[4];
    u16 t;
    u16 a;
};

void func_080BBF28(struct S *p, u16 a) {
    p->a = a;
    p->v = (s16)a << 8;
    p->t = 0;
}
