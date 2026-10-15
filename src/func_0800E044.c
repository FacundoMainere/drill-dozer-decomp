#include "types.h"

extern void func_08012BAC(void *p, s16 a, s16 b);

void func_0800E044(u8 *p, void *q) { func_08012BAC(q, *(s16 *)(p + 22), *(s16 *)(p + 24)); }
