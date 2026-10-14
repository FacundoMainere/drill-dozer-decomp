#include "types.h"

struct S {
    u32 a, b;
};

void func_080096FC(u8 *d, u8 *s) {
    *(struct S *)(d + 4) = *(struct S *)s;
    *(struct S *)(d + 12) = *(struct S *)(s + 8);
}
