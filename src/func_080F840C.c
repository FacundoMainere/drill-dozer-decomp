#include "types.h"

struct S {
    u8 pad[0x2E];
    u8 b;
    u8 pad2[0x11];
    u8 *ptr;
};

void func_080F840C(u32 a, struct S *p) {
    p->b = *p->ptr;
    p->ptr++;
}
