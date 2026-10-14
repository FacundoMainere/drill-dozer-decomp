#include "types.h"

struct R {
    u32 v;
    u8 pad[32];
};

struct S {
    u8 pad[12];
    struct R r[1];
};

extern struct S gUnk_0821B314;

u32 func_08009280(u32 a) { return gUnk_0821B314.r[a].v; }
