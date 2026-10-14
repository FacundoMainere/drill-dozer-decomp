#include "types.h"

extern void *memset(void *, int, u32);

void func_08016924(u8 *p) { memset(p + 0x40C, 0, 232); }
