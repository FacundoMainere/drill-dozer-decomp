#include "types.h"

extern void func_08025ECC(u8 *);
extern void func_0802A0B0(u32);

void func_08025D04(u8 *p) {
    func_08025ECC(p + 0x7C);
    func_0802A0B0(13);
}
