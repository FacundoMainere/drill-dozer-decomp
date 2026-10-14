#include "types.h"

struct S {
    u8 pad[30];
    u8 f[2];
};

void func_0807D878(struct S *p) {
    u32 i;
    for (i = 0; i < 2; i++)
        p->f[i] = 1;
}
