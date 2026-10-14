#include "types.h"

u32 func_080B11EC(u32 *p) {
    u32 *q = (u32 *)p[1];
    p[2] = q[2];
    p[1] = q[1];
    return 1;
}
