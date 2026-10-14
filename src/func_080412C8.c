#include "types.h"

extern void func_0801B064(u32);

void func_080412C8(u32 a, u32 *p) {
    s32 i;
    for (i = 1; i >= 0; i--)
        func_0801B064(*p++);
}
