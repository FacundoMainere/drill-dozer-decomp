#include "types.h"

u32 func_08013168(u8 *a, u8 *b, u16 *out) {
    *out = *(u16 *)(b + 6) - *(u16 *)(a + 4) + 1;
    return 1;
}
