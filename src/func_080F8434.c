#include "types.h"

void func_080F8434(u32 a, u8 *b) {
    u8 *p = *(u8 **)(b + 0x40);
    b[0x1E] = *p;
    *(u8 **)(b + 0x40) = p + 1;
}
