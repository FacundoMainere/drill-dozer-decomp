#include "types.h"

extern void func_0801B064(u32);

void func_0809135C(u8 *p) {
    p += 0x7C;
    func_0801B064(*(u32 *)(p + 0xC));
}
