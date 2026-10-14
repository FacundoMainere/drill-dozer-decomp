#include "types.h"

extern u8 *func_08011720(u32 *p);
extern u32 func_08020D88(u8 *p);

u32 func_08020DB0(u32 *p) { return func_08020D88(func_08011720(p)); }
