#include "types.h"

extern void func_0809F148(u8 *, u8 *);
extern void func_0809F5C4(u32);

void func_0809DEBC(u8 *p) {
    func_0809F148(p, p + 0x7C);
    func_0809F5C4(*(u32 *)(p + 0x7C));
}
