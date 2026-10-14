#include "types.h"

extern u32 func_0805624C(u8 *, u8, u32);

u32 func_08056294(u8 *a, u32 b) {
    return func_0805624C(a, (*(u8 **)(*(u8 **)(a + 4) + 0x34))[4], b);
}
