#include "types.h"

extern u32 func_080119D4(void);

u32 func_080119D8(void) {
    u32 r = func_080119D4();
    if (r == 4)
        return 2;
    if (r == 5)
        return 3;
    return r;
}
