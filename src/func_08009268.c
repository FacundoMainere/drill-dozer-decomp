#include "types.h"
extern unsigned char gUnk_0821B314[];
u16 func_08009268(u16 i) {
    unsigned char *p = gUnk_0821B314;
    return *(u16 *)(p + i * 36 + 28);
}
