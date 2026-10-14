#include "types.h"

extern u16 func_080485E8(s16, s16);

u16 func_08048600(s16 a, s16 b) {
    u16 r = func_080485E8(a, b);
    r = -r;
    return r;
}
