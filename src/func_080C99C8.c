#include "types.h"

void func_080C99C8(s32 *p) {
    s32 v = *p;
    v -= v >> 1;
    v += v >> 1;
    *p = -v;
}
