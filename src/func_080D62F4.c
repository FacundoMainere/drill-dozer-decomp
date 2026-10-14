#include "types.h"

extern void func_0801B064(u32);

void func_080D62F4(u8 *p) {
    *(u16 *)(p + 0x56) = 0;
    func_0801B064(*(u32 *)(p + 0x7C));
}
