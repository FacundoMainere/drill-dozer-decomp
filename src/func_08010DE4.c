#include "types.h"

extern void func_08010DC8(void);

void func_08010DE4(u8 *p) { *(u32 *)(p + 0x4F4) = (u32)func_08010DC8; }
