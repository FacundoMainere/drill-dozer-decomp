#include "types.h"

struct S {
    s32 a;
    s32 b;
    u32 c;
    u16 d;
    u8 e;
};

void func_080B9BA0(struct S *p, s16 v) {
    p->a = v << 8;
    p->b = v << 8;
    p->d = 0;
    p->e = 0;
}
