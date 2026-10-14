#include "types.h"
struct S {
    u8 pad[8];
    u8 f : 1;
};
u32 func_080560A8(struct S *p) { return p->f; }
