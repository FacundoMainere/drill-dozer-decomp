#include "types.h"

struct S {
    u32 a;
    u16 b;
    u16 c;
};

void func_080BEE14(struct S *p) {
    p->a = 0;
    p->b = 0;
    p->c = 0;
}
