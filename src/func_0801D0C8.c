#include "types.h"

extern void func_0801C128(void *, int, int);

int func_0801D0C8(u8 *p, int q) {
    func_0801C128(p, q, 0);
    {
        u32 b = *(u16 *)(p + 28);
        u32 t = 2;
        t |= b;
        *(u16 *)(p + 28) = t;
    }
    return 1;
}
