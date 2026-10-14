#include "types.h"

struct R {
    u8 b[12];
};

extern struct R gUnk_0202384C[];

struct R *func_080061BC(u8 a) { return &gUnk_0202384C[a]; }
