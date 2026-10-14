#include "types.h"
struct S {
    u8 pad[0x4E];
    u16 x;
    u16 pad2;
    u16 y;
};
struct P {
    u16 a, b;
};
void func_080D6000(struct S *p, struct P *out) {
    struct P t;
    t.a = p->x;
    t.b = p->y;
    *out = t;
}
