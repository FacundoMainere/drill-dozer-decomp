#include "types.h"

extern void func_0808FFAC(u8 *, u8 *);
extern void func_08001768(u32);

void func_08090488(u8 *p) {
    u8 *q = p + 0x7C;
    func_0808FFAC(p, q);
    func_08001768(*(u32 *)(q + 0x2C));
}
