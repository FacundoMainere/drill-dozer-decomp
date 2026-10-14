#include "types.h"

extern u16 func_08011A04(u32, u32);

u32 func_08083858(u32 a) {
    if (func_08011A04(a, 2))
        return 1;
    return 0;
}
