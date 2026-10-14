#include "types.h"

extern u8 *func_08011720(void *p);

u16 func_08011A0C(void *p) { return *(u16 *)(func_08011720(p) + 2); }
