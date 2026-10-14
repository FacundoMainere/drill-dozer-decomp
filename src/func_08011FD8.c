#include "types.h"
extern unsigned char gUnk_0821B314[];
u32 func_08011FD8(u16 i) {
    unsigned char *p = gUnk_0821B314;
    return *(u32 *)(p + i * 36);
}
