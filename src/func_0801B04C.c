#include "types.h"

extern void func_080066B8(u32, u32);
extern void func_08005560(u32);

void func_0801B04C(u8 *p) {
    func_080066B8(*(u16 *)(p + 0x10), *(u16 *)(p + 0x12));
    func_08005560((u32)p);
}
