#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_020239D8[];

void func_08008730(u32 a, void *b) { func_080F86FC(gUnk_020239D8 + (a << 11), b, 0x400); }
