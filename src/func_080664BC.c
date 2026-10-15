#include "types.h"

extern void func_080066B8(u32, u32);
extern void func_08005560(u32);

void func_080664BC(u8 *p) {
    func_080066B8(*(u16 *)(p + 16), *(u16 *)(p + 18));
    func_08005560((u32)p);
}
