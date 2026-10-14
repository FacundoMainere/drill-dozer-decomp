#include "types.h"

extern void func_080561A4(void);
extern void func_0801B064(u32);

void func_080CA02C(u8 *p) {
    func_080561A4();
    func_0801B064(*(u32 *)(p + 0x7C));
}
