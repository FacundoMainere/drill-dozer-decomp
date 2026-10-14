#include "types.h"

extern void func_08005560(u32);

void func_080C2790(u32 a, u32 *b) {
    if (b[3] != 0)
        func_08005560(b[3]);
}
