#include "types.h"

extern void func_0801B064(u32);

void func_08024EB4(u8 *p) {
    u32 v;

    p += 0x7C;
    v = *(u32 *)(p + 4);
    if (v)
        func_0801B064(v);
}
