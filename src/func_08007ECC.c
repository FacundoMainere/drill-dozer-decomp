#include "types.h"

struct S {
    u32 a;
    u32 b;
};

void func_08007ECC(u8 *a, struct S *b) { *b = *(struct S *)(a + 12); }
