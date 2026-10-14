#include "types.h"

extern void func_080A740C(u32 *);

void func_080A7494(u32 *p) {
    if (p[31] == 0)
        func_080A740C(p);
}
