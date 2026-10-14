#include "types.h"

u32 func_08064788(u8 *p) {
    *(u32 *)(p + 0x4C) = *(u32 *)(*(u8 **)(p + 0x4C) + 4);
    return 1;
}
