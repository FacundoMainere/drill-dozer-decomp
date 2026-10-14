#include "types.h"

struct S {
    u8 pad[4];
    u8 a, b, c;
};

void func_08056098(u32 a, struct S *p, u32 v) {
    p->a = v;
    p->b = 0;
    p->c = 0;
}
