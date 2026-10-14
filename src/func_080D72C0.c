#include "types.h"

extern u32 func_080D7298(void);
extern u8 gUnk_0848258C[];

u8 func_080D72C0(void) {
    u32 i = func_080D7298();
    return gUnk_0848258C[i];
}
