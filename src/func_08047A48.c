#include "types.h"
extern void *func_08001728(u32);
extern void *gUnk_02035A74;
void func_08047A48(void) {
    void **p = &gUnk_02035A74;
    *p = func_08001728(80);
}
