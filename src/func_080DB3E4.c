#include "types.h"

extern void func_0801B064(u32);

void func_080DB3E4(u8 *p) {
    u32 x;
    p += 0x7C;
    x = *(u32 *)(p + 0x24);
    if (x)
        func_0801B064(x);
}
