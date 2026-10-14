#include "types.h"

extern void *func_08066C8C(u32);
extern void func_08066BC4(void *, u32);

void func_08066D30(u32 a) {
    void *p = func_08066C8C(a);
    if (p != 0)
        func_08066BC4(p, a);
}
