#include "types.h"

extern void func_08038B84(u8 *);

void func_08038C38(u8 *p) {
    u8 *q = p + 0x7C;
    *(u16 *)(q + 0x22) = *(u16 *)(*(u8 **)(p + 0x7C) + 0x16);
    func_08038B84(q);
}
