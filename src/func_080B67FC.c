#include "types.h"

struct S {
    u8 *p;
    u16 a;
};

void func_080B67FC(struct S *s, u16 v) {
    s->a = v;
    s->p[1] = 0;
}
