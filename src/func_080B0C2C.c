#include "types.h"

struct S080B0C2C {
    u32 unk0;
    u32 *unk4;
    u8 pad8[0x86];
    u16 unk8E;
};

extern void func_080B06EC(struct S080B0C2C *);

u32 func_080B0C2C(struct S080B0C2C *p) {
    p->unk8E = p->unk4[1];
    func_080B06EC(p);
    return 0;
}
