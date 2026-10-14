#include "types.h"

struct S {
    u8 a;
    u8 b;
};

void func_08096F20(struct S *p, u8 v) {
    p->a = v;
    p->b = 0;
}
