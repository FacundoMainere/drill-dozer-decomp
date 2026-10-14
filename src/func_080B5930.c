#include "types.h"

struct S {
    u16 a;
    u16 b;
    u32 c;
};

void func_080B5930(struct S *p, u16 v) {
    p->a = v;
    p->b = 0;
    p->c = 0;
}
