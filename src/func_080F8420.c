#include "types.h"

struct S {
    u8 pad[0x2F];
    u8 b;
    u8 pad2[0x10];
    u8 *ptr;
};

void func_080F8420(u32 a, struct S *p) {
    p->b = *p->ptr;
    p->ptr++;
}
