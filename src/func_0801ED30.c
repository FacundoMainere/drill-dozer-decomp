#include "types.h"

extern void func_08005560(u32);

void func_0801ED30(u32 *p) {
    s32 i;
    for (i = 3; i >= 0; i--)
        func_08005560(*p++);
}
