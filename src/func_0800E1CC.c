#include "types.h"

struct S {
    u16 a;
    u16 b;
    u16 c;
};

extern struct S gUnk_02034740;

void func_0800E1CC(u16 *x, u16 *y) {
    *x = gUnk_02034740.b;
    *y = gUnk_02034740.c;
}
