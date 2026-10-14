#include "types.h"

struct T {
    u8 pad[0x27];
    u8 v;
    u8 pad2[0x18];
    u8 *cmd;
};

void func_080F8460(u32 a, struct T *t) {
    t->v = *t->cmd;
    t->cmd++;
}
