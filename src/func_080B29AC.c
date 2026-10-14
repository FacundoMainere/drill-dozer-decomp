#include "types.h"

extern u8 *func_080B27D8(void);

void func_080B29AC(u32 a) { *(u16 *)(func_080B27D8() + 0x4E) = a; }
