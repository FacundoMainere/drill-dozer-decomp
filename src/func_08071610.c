#include "types.h"

struct S {
    u8 pad[0x24];
    u16 a;
    u16 b;
    u32 pad2;
    u32 c;
    u32 d;
};

void func_08071610(struct S *p) {
    p->c = 1;
    p->a = 0;
    p->b = 0;
    p->d = 0;
}
