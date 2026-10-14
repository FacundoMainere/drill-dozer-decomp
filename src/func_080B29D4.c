#include "types.h"

extern u8 *func_080B27D8(u32 *);

u32 *func_080B29D4(u32 *p) {
    *p = *(u32 *)(func_080B27D8(p) + 0x24);
    return p;
}
