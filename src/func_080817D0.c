#include "types.h"

extern u8 func_08080F7C(u8 *, u32, u32);

u32 func_080817D0(u8 *p, u32 a) {
    p[0x76] = func_08080F7C(p, a, 10);
    return 1;
}
