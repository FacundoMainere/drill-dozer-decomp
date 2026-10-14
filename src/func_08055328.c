#include "types.h"

extern void func_08055400(u8 *, u8, u32);

void func_08055328(u8 *p) {
    u8 *q = p + 124;
    func_08055400(p, q[7], 0);
}
