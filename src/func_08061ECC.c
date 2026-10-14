#include "types.h"

extern u8 *func_08061EE4(u8 *);

void func_08061ECC(u8 *p) {
    u8 *q = p + 124;
    u8 *r = func_08061EE4(p);
    *(u8 **)(p + 124) = r;
    r[1] = q[5];
}
