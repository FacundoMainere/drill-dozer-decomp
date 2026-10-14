#include "types.h"

extern void func_0801B064(u32);

void func_0801D0B8(u8 *a) {
    a += 0x7C;
    func_0801B064(*(u32 *)(a + 4));
}
