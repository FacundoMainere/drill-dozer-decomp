#include "types.h"

extern int *func_08011720(u32 *p);
extern int func_08011964(int *p);

int func_08011968(u32 *p) { return func_08011964(func_08011720(p)); }
