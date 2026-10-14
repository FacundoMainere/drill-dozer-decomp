#include "types.h"

struct S {
    u8 a;
    u8 b;
    u8 c;
};

void func_080E2AF4(struct S *p, u8 v) {
    p->a = v;
    p->b = 0;
    p->c = 0;
}
