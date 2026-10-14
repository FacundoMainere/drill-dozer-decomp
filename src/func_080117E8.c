#include "types.h"

extern u8 *func_08011720(void);

u32 func_080117E8(void) { return *(u32 *)(func_08011720() + 0x2AC); }
