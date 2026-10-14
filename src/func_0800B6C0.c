#include "types.h"

struct S {
    u8 pad[0xDE];
    u16 arr[1];
};

void func_0800B6C0(struct S *p, u32 i) { p->arr[i] = 0; }
