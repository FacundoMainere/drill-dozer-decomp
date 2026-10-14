#include "types.h"

struct S {
    u16 a, b, c, d;
};

extern struct S gUnk_02034748;

void func_0800C330(u16 *p) {
    p[0] = gUnk_02034748.c;
    p[1] = gUnk_02034748.d;
}
