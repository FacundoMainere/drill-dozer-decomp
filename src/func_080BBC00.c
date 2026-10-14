#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
    u16 d;
    u8 e;
};

void func_080BBC00(struct S *p) {
    p->a = 0xC00;
    p->b = 0xC00;
    p->d = 0;
    p->e = 0;
}
