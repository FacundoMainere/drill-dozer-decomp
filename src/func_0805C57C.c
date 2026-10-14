#include "types.h"

struct S {
    u8 pad[5];
    u8 a;
    u8 b;
};

void func_0805C57C(struct S *p, u8 v) {
    p->a = v;
    p->b = 0;
}
