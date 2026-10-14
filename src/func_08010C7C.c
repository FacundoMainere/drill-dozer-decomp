#include "types.h"

void func_08010C7C(u8 *a, u8 *b) {
    *(u32 *)(a + 0x10) = 0;
    *(u32 *)(a + 0x24) = 0;
    *(u8 **)(a + 0x30) = b;
    *(u8 **)(b + 0x44) = a;
}
