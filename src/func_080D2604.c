#include "types.h"

struct S {
    u8 pad[0x1C];
    u8 a;
    u8 b;
    u8 pad2[2];
    u16 c;
    u16 d;
};

void func_080D2604(struct S *p, u8 v) {
    p->a = v;
    p->b = 0;
    p->c = 0;
    p->d = 0;
}
