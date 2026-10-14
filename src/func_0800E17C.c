#include "types.h"

struct S {
    u8 a;
    u16 b;
    u16 c;
};

extern struct S gUnk_02034740;

void func_0800E17C(u16 b, u16 c) {
    gUnk_02034740.a = 1;
    gUnk_02034740.b = b;
    gUnk_02034740.c = c;
}
