#include "types.h"

struct S {
    u32 a;
    u32 b;
    u16 c;
};

void func_080B5F4C(struct S *p, u32 v) {
    p->a = v;
    p->c = 0;
    p->b = 0;
}
