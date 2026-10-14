#include "types.h"

extern u32 func_08056294(u8 *, u8 *);

u32 func_08026AA8(u8 *a) {
    if (func_08056294(a, a + 60) != 0)
        return 1;
    return 0;
}
