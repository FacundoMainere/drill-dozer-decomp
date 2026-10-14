#include "types.h"

struct V {
    s32 x;
    s32 y;
};

void func_080067D8(u8 *a, struct V *b) { *(struct V *)(a + 8) = *b; }
