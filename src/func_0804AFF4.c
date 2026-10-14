#include "types.h"
extern void *func_08001728(u32);
extern void *gUnk_02036008;
void func_0804AFF4(void) {
    void **p = &gUnk_02036008;
    *p = func_08001728(20);
}
