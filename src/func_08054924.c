#include "types.h"

extern void func_0801B064(u32);

void func_08054924(u32 a, u32 *p) {
    s32 i;
    u32 *q = p + 1;
    for (i = 1; i >= 0; i--)
        func_0801B064(*q++);
}
