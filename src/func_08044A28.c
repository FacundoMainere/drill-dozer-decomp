#include "types.h"

u32 func_08044A28(u8 *p) {
    p += 0x7C;
    if (p[6] == 4)
        return 1;
    return 0;
}
