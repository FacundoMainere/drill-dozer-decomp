#include "types.h"

extern void func_08005560(u32);

void func_080EB044(u8 *p) {
    p += 0x7C;
    func_08005560(*(u32 *)(p + 0x10));
}
