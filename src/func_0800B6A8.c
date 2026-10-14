#include "types.h"

struct S {
    u8 pad[0xDE];
    u16 arr[1];
};

void func_0800B6A8(struct S *p, u32 i, u32 v) { p->arr[i] = v; }
