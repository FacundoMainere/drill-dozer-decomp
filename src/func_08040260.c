#include "types.h"

void func_08040260(u32 *a, u32 b) {
    u32 g = a[26];
    u32 sh = a[1] << 2;
    u32 k = 0xCC;
    *(u32 *)((g + k) + sh) = b;
}
