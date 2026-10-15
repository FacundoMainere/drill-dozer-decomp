#include "types.h"

extern void func_0800B5D8(u32, u8);

struct S {
    u8 a;
    u8 pad[4];
    u8 b;
    u8 pad2[2];
    u32 c;
};

u32 func_0806EE4C(u8 *p, struct S *s) {
    func_0800B5D8(*(u32 *)(p + 12), s->b);
    s->a = 0;
    s->c = 0;
    return 0;
}
