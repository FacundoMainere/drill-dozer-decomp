#include "types.h"

extern void func_080939C8(u32, u32 *);

void func_08093950(u32 a, u32 *b) {
    b[3] = 1;
    func_080939C8(a, b);
}
