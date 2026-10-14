#include "types.h"

struct S {
    u8 a;
    u32 b;
};

extern void func_08001D1C(u8, u32, u32);

void func_080B9B90(u32 x, struct S *p) { func_08001D1C(p->a, p->b, 1); }
