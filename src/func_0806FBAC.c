#include "types.h"

extern void func_0801B1C4(u32 a, u8 *b);

u32 func_0806FBAC(u32 a, u8 *b) {
    b[16] |= 2;
    func_0801B1C4(a, b);
    return 6;
}
