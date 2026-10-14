#include "types.h"

extern void func_0801CE04(u32);

void func_0801CEB8(u32 a, u32 b) {
    func_0801CE04(a);
    *(u32 *)(a + 92) = b;
}
