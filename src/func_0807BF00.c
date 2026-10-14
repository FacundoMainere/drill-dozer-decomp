#include "types.h"
struct S {
    u8 *a;
    u8 *b;
    u8 *c;
};
extern struct S *gUnk_02036110;
void func_0807BF00(u8 v) {
    gUnk_02036110->b[1] = v;
    gUnk_02036110->c[1] = v;
}
