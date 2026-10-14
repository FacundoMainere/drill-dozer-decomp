#include "types.h"

extern u32 func_08071568(u8 *);

u32 func_080719FC(u8 *p) {
    if (func_08071568(p))
        *(u32 *)(p + 12) = 1;
    return 0;
}
