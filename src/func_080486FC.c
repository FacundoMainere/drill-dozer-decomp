#include "types.h"

extern u32 func_08001AD8(void);

u32 func_080486FC(void) {
    if ((u8)func_08001AD8() == 0)
        return 0;
    return 1;
}
