#include "types.h"

struct S {
    u32 a;
    u32 b;
};

extern struct S gUnk_08462AA4[];

void func_080C99B4(struct S *d, u32 i) { *d = gUnk_08462AA4[i]; }
