#include "types.h"

extern void func_0805007C(u32 *);

void func_080854F4(u32 a, u32 *b) {
    if (b[1] != 0)
        func_0805007C(b + 1);
}
