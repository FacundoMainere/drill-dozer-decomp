#include "types.h"

struct S {
    u8 pad[8];
    u8 lo : 7;
    u8 hi : 1;
};

extern struct S gUnk_02035454;

void func_08019B54(u8 a) { gUnk_02035454.hi = a; }
