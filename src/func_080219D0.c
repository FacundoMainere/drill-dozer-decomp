#include "types.h"

extern void func_08021990(u32);
extern void func_080219B8(void);

void func_080219D0(u8 a) {
    func_08021990(a << 8);
    func_080219B8();
}
