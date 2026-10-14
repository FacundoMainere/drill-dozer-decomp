#include "types.h"

extern u8 gUnk_0203472C;
extern void func_08009878(u32);

void func_08009C30(u8 a) {
    gUnk_0203472C = a;
    func_08009878(178);
}
