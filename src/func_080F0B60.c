#include "types.h"

extern s32 func_080F0B4C(void);

s32 func_080F0B60(void) {
    s32 x = func_080F0B4C();
    x = (240 - x) >> 1;
    return x;
}
