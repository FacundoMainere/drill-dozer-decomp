#include "types.h"
struct S {
    u8 pad[0x7C];
    u32 a[12];
};
void func_080A731C(struct S *p) {
    u32 *q = p->a;
    q[11] = 1;
}
