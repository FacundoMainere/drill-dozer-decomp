#include "types.h"

extern void func_08005560(u32);

void func_080C8148(u8 *p) {
    u8 *q = p + 124;
    *(u32 *)(*(u32 *)(q + 8) + 12) = 0;
    func_08005560(*(u32 *)(p + 124));
}
