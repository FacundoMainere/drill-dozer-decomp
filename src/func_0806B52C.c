#include "types.h"

struct S0806B52C {
    u8 pad[14];
    u8 f : 1;
};

u32 func_0806B52C(struct S0806B52C *p) { return p->f; }
