#include "types.h"

struct S {
    u32 a;
    u32 b;
};

void func_0802FBA0(u8 *p, struct S *s) {
    *(u32 *)(p + 0x74) = 0;
    *(struct S *)(p + 0x160) = *s;
}
