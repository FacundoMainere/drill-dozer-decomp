#include "types.h"

extern void *func_08001728(u32);

void func_08040420(u8 *a) {
    u8 *p = func_08001728(24);
    *(u8 **)(a + 0x7C) = p;
    *(u8 **)(p + 12) = a;
    *(u32 *)(p + 8) = *(u32 *)(a + 12);
}
