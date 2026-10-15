#include "types.h"

extern void func_0801AEF0(u32, u8 *);

void func_0805059C(u32 a, u8 **b) {
    func_0801AEF0(a, b[0]);
    b[1][1] = b[0][1];
}
