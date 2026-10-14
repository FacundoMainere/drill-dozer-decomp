#include "types.h"
void func_080F83F8(u32 a, u8 *b) {
    u8 v = **(u8 **)(b + 64);
    b[45] = v;
    *(u8 **)(b + 64) += 1;
}
