#include "types.h"

extern void func_08019DC8(u32, u8, u32);

u32 func_080B366C(u32 a, u32 *p) {
    *p = 8;
    func_08019DC8(0x10000, 8, 0);
    return 0;
}
