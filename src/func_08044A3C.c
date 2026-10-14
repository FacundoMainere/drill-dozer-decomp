#include "types.h"
extern void *func_08001728(u32);
extern void *gUnk_02035A70;
void func_08044A3C(void) {
    void **p = &gUnk_02035A70;
    *p = func_08001728(20);
}
