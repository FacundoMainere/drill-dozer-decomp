#include "types.h"

extern void func_0801CECC(u8 *);

void func_0801AEB8(u8 *p, s32 a) {
    *(u16 *)(p + 0x22) += ~(a - 8);
    *(u32 *)(p + 0x24) = *(u32 *)(p + 0x20);
    func_0801CECC(p);
}
