#include "types.h"

void func_08058B74(u8 *a, u8 *b) {
    *(u16 *)(*(u8 **)(b + 36) + 20) = *(u16 *)(a + 36);
    *(u16 *)(*(u8 *volatile *)(b + 36) + 22) = *(u16 *)(a + 38);
}
