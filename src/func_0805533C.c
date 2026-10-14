#include "types.h"

extern void func_08055400(u8 *, u8, u8);

void func_0805533C(u8 *a) {
    u8 *p = a + 124;
    func_08055400(a, p[7], 1);
}
