#include "types.h"

struct T {
    u8 pad[0x26];
    u8 v;
    u8 pad2[0x40 - 0x27];
    u8 *cmd;
};

void func_080F844C(u32 a, struct T *t) {
    t->v = *t->cmd;
    t->cmd++;
}
