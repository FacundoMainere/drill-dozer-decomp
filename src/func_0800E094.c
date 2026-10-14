#include "types.h"

struct P {
    u16 x;
    u16 y;
};

struct E {
    u8 pad[22];
    u16 x;
    u16 y;
};

void func_0800E094(struct E *a, struct P *b, struct P *c) {
    c->x = a->x + b->x;
    c->y = a->y + b->y;
}
