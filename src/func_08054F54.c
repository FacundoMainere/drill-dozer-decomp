#include "types.h"

extern void func_08005560(u32);

void func_08054F54(u32 a, u8 *b) {
    u32 *p = *(u32 **)(b + 100);
    s32 i;

    for (i = 10; i >= 0; i--)
        func_08005560(*p++);
}
