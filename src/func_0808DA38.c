#include "types.h"

extern u8 *gUnk_0203916C;

u32 func_0808DA38(void) {
    u8 *p = gUnk_0203916C;
    p += 0x7C;
    return *(u32 *)(p + 0x54);
}
