#include "types.h"

extern void func_0801BF48(u32 a, u32 b);
extern void func_0801B064(u32);

void func_08029818(u8 *p) {
    func_0801BF48((u32)(p + 0x84), *(u32 *)(p + 0x7C));
    func_0801B064(*(u32 *)(p + 0x7C));
}
