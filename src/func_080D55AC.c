#include "types.h"

struct S {
    u8 pad[0x48];
    u8 a;
    u8 b;
    u8 c;
};

void func_080D55AC(u32 x, struct S *p, u32 v) {
    p->a = v;
    p->b = 0;
    p->c = 0;
}
