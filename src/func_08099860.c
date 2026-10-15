#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_0801B064(u32);

void func_08099860(u8 *p) {
    func_0801BF48(p + 0x80, *(u32 *)(p + 0x7C));
    func_0801B064(*(u32 *)(p + 0x7C));
}
