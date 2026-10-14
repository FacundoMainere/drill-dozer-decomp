#include "types.h"

struct Pair {
    u32 a;
    u32 b;
};

void func_08007EC0(u8 *a, struct Pair *b) { *b = *(struct Pair *)(a + 4); }
