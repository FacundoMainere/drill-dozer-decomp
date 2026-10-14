#include "types.h"

struct T {
    u8 pad[0x2C];
    u8 v;
    u8 pad2[0x40 - 0x2D];
    u8 *cmd;
};

void func_080F83E4(u32 a, struct T *t) {
    t->v = *t->cmd;
    t->cmd++;
}
