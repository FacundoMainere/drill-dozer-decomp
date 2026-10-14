#include "types.h"

void func_080C86F8(u8 *a, u16 *b, u8 *c) {
    *(u16 *)(a + 20) = b[0];
    *(u16 *)(a + 22) = b[1] + c[73];
}
