#include "types.h"

struct T {
    u8 pad[0x2C];
    u16 a;
    u16 b;
};

void func_080EF3FC(struct T *t, u16 m) {
    t->a &= m;
    t->b &= m;
}
