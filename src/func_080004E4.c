#include "types.h"

struct Unk03004B30 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
};

extern struct Unk03004B30 gUnk_03004B30;

void func_080004E4(u32 a) {
    struct Unk03004B30 *p = &gUnk_03004B30;
    p->unk8 = a;
}
