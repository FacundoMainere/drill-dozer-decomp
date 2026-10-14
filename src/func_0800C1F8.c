#include "types.h"

struct R {
    u8 pad[31];
    u8 v;
    u8 pad2[4];
};

extern struct R gUnk_0821B314[];

u8 func_0800C1F8(u32 i) { return gUnk_0821B314[i].v; }
