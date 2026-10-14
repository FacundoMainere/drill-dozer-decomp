#include "types.h"

struct S {
    u8 pad[20];
    u8 a;
    u8 pad2;
    u16 b;
    u16 c;
};

void func_0808663C(struct S *p, u8 v) {
    p->a = v;
    p->b = 0;
    p->c = 0;
}
