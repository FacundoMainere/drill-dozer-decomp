#include "types.h"

struct S {
    u32 a;
    u32 b;
};

void func_08011824(u8 *a, struct S *b) { *b = *(struct S *)(a + 344); }
