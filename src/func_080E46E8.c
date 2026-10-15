#include "types.h"

extern void func_08005814(u32, u32);

void func_080E46E8(u32 *p) {
    if (p[1] != 0)
        func_08005814(p[1], p[6]);
}
