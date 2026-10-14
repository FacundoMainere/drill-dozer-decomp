#include "types.h"

extern void func_080F86A4(u8);

void func_0800B538(u8 *p, u8 v) {
    p[12] = v;
    func_080F86A4(v);
}
