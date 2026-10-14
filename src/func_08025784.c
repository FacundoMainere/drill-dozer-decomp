#include "types.h"

extern void func_08024570(u32, u32);

void func_08025784(u8 *p) {
    u8 *q = p + 0x7C;
    func_08024570(*(u32 *)(p + 0x7C), *(u32 *)(q + 4));
}
