#include "types.h"

extern void func_08007F8C(void *);

void func_080088A4(u8 *p) {
    func_08007F8C(p);
    if (*(void **)(p + 0x40))
        func_08007F8C(*(void **)(p + 0x40));
}
