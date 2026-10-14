#include "types.h"

struct S {
    u8 a;
    u16 b;
    u16 c;
};

extern struct S gUnk_02034740;

void func_0800E16C(void) {
    gUnk_02034740.a = 0;
    gUnk_02034740.b = 0;
    gUnk_02034740.c = 0;
}
