#include "types.h"

struct S {
    u8 pad[0x4C];
    u32 a;
    u32 b;
    u8 pad2[8];
    u32 c;
    u16 d;
};

void func_08029658(struct S *p) {
    p->d = 0;
    p->c = 0;
    p->a = 0;
    p->b = 0;
}
