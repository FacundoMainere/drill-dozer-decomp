#include "types.h"

extern void func_080066B8(u32, u32);

void func_080EB218(u8 *p) {
    p += 0x7C;
    func_080066B8(*(u16 *)p, *(u16 *)(p + 2));
}
