#include "types.h"

struct S {
    u32 pad[4];
    u32 a;
    u32 b;
};

void func_080715AC(struct S *p) {
    p->a++;
    p->b = 0;
}
