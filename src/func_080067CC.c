#include "types.h"

struct S {
    u32 a;
    u32 b;
};

void func_080067CC(struct S *a, struct S *b) { *b = a[1]; }
