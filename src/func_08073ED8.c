#include "types.h"

struct S {
    u32 a;
    u8 b : 1;
};

extern struct S gUnk_020360F4;

u32 func_08073ED8(void) { return gUnk_020360F4.b; }
