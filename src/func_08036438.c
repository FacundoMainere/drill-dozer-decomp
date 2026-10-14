#include "types.h"

extern u16 func_08036430(u8 *p);
extern void func_08021990(u16);
extern void func_080219B8(void);

void func_08036438(u8 *p) {
    func_08021990(func_08036430(p) << 8);
    func_080219B8();
}
