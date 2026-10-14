#include "types.h"
struct S {
    u8 pad[26];
    u16 f;
};
void func_080937B0(struct S *p) { p->f = 15 | p->f; }
