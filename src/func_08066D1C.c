#include "types.h"

extern void *func_08066C8C(void);
extern void func_08066BE8(void *, u32);

void func_08066D1C(void) {
    void *p = func_08066C8C();
    if (p != 0)
        func_08066BE8(p, 2);
}
