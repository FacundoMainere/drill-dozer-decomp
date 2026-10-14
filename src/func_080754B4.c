#include "types.h"

s32 func_080754B4(s32 a) {
    a -= a >> 1;
    a += a >> 1;
    return a;
}
