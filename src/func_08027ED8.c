#include "types.h"
u32 func_08027ED8(u8 *p) {
    *(u32 *)(p + 0x4C) = 0;
    *(u32 *)(p + 0x50) = 0;
    p[0x76] = 3;
    p[0x73] = 20;
    return 1;
}
