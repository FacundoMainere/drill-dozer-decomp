#include "types.h"

extern u8 *func_080B27D8(void);

void func_080B29C0(u32 a) { *(u16 *)(func_080B27D8() + 0x52) = a; }
