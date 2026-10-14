#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_080C7480(u8 *);

void func_080C748C(u8 *p) {
    func_0801BF48(p + 128, *(u32 *)(p + 124));
    func_080C7480(p);
}
