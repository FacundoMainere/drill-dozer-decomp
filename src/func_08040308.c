#include "types.h"

struct S {
    u8 pad[0x20];
    u32 a;
    u8 pad2[0x6C - 0x24];
    u8 *p;
};

void func_08040308(u32 x, struct S *s) {
    s->a = 1;
    s->p[1] = 1;
}
