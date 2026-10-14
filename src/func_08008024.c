#include "types.h"

extern void func_080F8710(u32, u32);

void func_08008024(u32 **p) {
    u32 f = ((u32 *)p)[13];
    if (f != 0)
        func_080F8710(**p, f);
}
