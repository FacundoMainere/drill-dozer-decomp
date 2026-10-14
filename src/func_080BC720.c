#include "types.h"

extern void func_08001E94(u8, u32, u32);

void func_080BC720(u32 a, u8 *b) { func_08001E94(b[0], *(u32 *)(b + 4), 1); }
