#include "types.h"

struct S {
    u32 a;
    u32 b;
};

void func_080096E8(u8 *a, struct S *b) {
    b[0] = *(struct S *)(a + 4);
    b[1] = *(struct S *)(a + 12);
}
