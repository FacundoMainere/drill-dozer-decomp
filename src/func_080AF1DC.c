#include "types.h"

extern void func_0801B064(u32);

void func_080AF1DC(u8 *p) {
    if (*(u32 *)(p + 0x7C))
        func_0801B064(*(u32 *)(p + 0x7C));
}
