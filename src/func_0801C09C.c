#include "types.h"

u8 func_0801C09C(u8 **p, u32 i) {
    u8 *q = p[2];
    if (q == 0)
        return 3;
    q += 5;
    return q[i];
}
