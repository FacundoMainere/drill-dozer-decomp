#include "types.h"

extern void func_080F1460(u32, u32, void (*)(void));
extern void func_080F1CB0(void);

void func_080F1CA0(u32 a, u32 b) { func_080F1460(a, b, func_080F1CB0); }
