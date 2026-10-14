#include "types.h"

struct S {
    u8 pad[10];
    u8 a;
    u8 b;
};

void func_08098BB8(struct S *p, u8 v) {
    p->a = v;
    p->b = 0;
}
