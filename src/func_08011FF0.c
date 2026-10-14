#include "types.h"

struct R {
    u32 v;
    u8 pad[32];
};

struct S {
    u8 pad[8];
    struct R r[1];
};

extern struct S gUnk_0821B314;

u32 func_08011FF0(u16 a) { return gUnk_0821B314.r[a].v; }
