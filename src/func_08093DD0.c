#include "types.h"

struct S {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
};

void func_08093DD0(struct S *p) {
    p->c = 0x400;
    p->d = 0;
}
