#include "types.h"

void func_080B06EC(u8 *p) {
    *(u32 *)(p + 4) += 12;
    *(u32 *)(p + 0x30) = 0;
    *(u16 *)(p + 0x94) = 0;
}
