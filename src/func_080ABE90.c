#include "types.h"

extern void func_080ABE5C(u8 *a, u32 b);
extern void func_080ABE64(u32 b);

void func_080ABE90(u8 *a, u32 b) {
    func_080ABE5C(a, b);
    func_080ABE64(b);
}
