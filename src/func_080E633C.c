#include "types.h"

extern void func_0801B064(u32);

void func_080E633C(u32 a, u32 *p) {
    s32 i;
    for (i = 2; i >= 0; i--)
        func_0801B064(*p++);
}
