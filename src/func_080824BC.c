#include "types.h"

extern u8 *func_080444A4(u8);

s8 func_080824BC(u8 *p) {
    p += 0x7C;
    return func_080444A4(p[18])[12];
}
