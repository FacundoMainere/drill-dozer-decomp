#include "types.h"

struct S {
    u8 pad[0x74];
    u8 a;
    u8 b;
    u8 c;
};

void func_080411BC(struct S *p, u32 x, u8 c) {
    p->a = 0;
    p->b = 0;
    p->c = c;
}
