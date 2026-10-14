#include "types.h"

extern void func_080EDBA8(void);

u32 func_08069314(u8 *p) {
    if (p[28])
        func_080EDBA8();
    return 1;
}
