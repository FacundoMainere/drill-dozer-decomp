#include "types.h"

extern u8 *func_08066D60(void);

void func_0806715C(u32 a) {
    u8 *p = func_08066D60();
    *(u32 *)(p + 24) = a;
    *(u32 *)(p + 20) = 0;
}
