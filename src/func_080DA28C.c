#include "types.h"

struct S {
    u8 pad[0x73];
    u8 b;
    u8 a;
    u8 x;
    u8 c;
};

void func_080DA28C(struct S *p, u8 a) {
    p->a = a;
    p->c = 0;
    p->b = 0;
}
