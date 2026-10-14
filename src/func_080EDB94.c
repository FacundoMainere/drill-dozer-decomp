#include "types.h"

extern u32 func_080EDB20(void);
extern void func_080ED9C8(u32, void *);
extern u8 gUnk_084CDD88[];

void func_080EDB94(void) { func_080ED9C8(func_080EDB20(), gUnk_084CDD88); }
