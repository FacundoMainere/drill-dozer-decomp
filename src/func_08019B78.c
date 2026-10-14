#include "types.h"

struct S {
    u32 pad;
    u16 a : 6;
    u16 b : 5;
};

extern struct S gUnk_02035454;

u32 func_08019B78(void) { return gUnk_02035454.b; }
