#include "types.h"
extern void *func_08001728(u32);
extern void *gUnk_030012A4;
void func_0801EE1C(void) {
    void **p = &gUnk_030012A4;
    *p = func_08001728(96);
}
