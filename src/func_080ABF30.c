#include "types.h"

u8 func_080ABF30(u8 *p) {
    p += 0x7C;
    return (*(u8 **)(p + 0x14))[8];
}
