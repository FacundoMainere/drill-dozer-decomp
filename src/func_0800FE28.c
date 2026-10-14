#include "types.h"

struct P {
    u32 a, b;
};

void func_0800FE28(u8 *p, struct P *s) { *(struct P *)(p + 0x48) = *s; }
