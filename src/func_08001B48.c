#include "types.h"

extern u32 func_08000D08(u32);
extern void func_08000D3C(u32);

void func_08001B48(u8 a) { func_08000D3C(func_08000D08(a)); }
