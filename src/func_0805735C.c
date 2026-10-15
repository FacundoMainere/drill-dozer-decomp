#include "types.h"

extern u32 func_080560CC(void);
extern u8 *func_08011720(u32);

u32 func_0805735C(void) { return *(u32 *)(func_08011720(func_080560CC()) + 0x118); }
