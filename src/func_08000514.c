#include "types.h"

extern u32 func_08000528(u32 a);
extern void func_080F8838(u32 a, u32 b);

void func_08000514(void) { func_080F8838(2, func_08000528(7)); }
