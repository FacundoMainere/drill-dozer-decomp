#include "types.h"

struct S {
    u8 pad[0xCC];
    u32 arr[1];
};

u32 func_0803DAA4(struct S *p, u32 i) { return p->arr[i]; }
