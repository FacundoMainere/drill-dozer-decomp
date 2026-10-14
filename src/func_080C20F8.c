#include "types.h"

struct S {
    u16 a;
    u16 b;
};
extern struct S *gUnk_020391BC;

u16 func_080C20F8(void) { return gUnk_020391BC->b; }
