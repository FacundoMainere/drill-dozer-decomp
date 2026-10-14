#include "types.h"
extern void func_080412C8(u8 *, u8 *);
extern void func_080561A4(u8 *);
void func_08040A18(u8 *a) {
    func_080412C8(a, a + 0x7C);
    func_080561A4(a);
}
