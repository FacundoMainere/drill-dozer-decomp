#include "types.h"

extern u8 *func_0802FD44(void *p);

u32 func_080303CC(void *p, u32 m) { return *(u32 *)(func_0802FD44(p) + 8) & m; }
