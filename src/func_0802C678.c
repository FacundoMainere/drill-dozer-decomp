#include "types.h"

extern u8 *gUnk_020358CC;

u8 func_0802C678(u8 a) {
    u8 *p = gUnk_020358CC;
    p += a * 244;
    return p[236];
}
