#include "types.h"

extern void func_08063740(void);
extern void func_0800089C(void (*)(void), u8 *, u32);

void func_08063710(u8 *p) {
    *(u32 *)(p + 8) = 1;
    func_0800089C(func_08063740, p, 50);
}
