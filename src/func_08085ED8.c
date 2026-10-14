#include "types.h"
struct S {
    u8 pad[0x74];
    u8 a;
    u8 b;
    u8 c;
};
void func_08085ED8(struct S *p, u32 v) {
    p->c = v;
    p->b = 0;
    p->a = 0;
}
