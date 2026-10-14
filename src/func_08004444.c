#include "types.h"

struct S {
    u8 pad[27];
    u8 f;
    u8 pad2[4];
};

extern struct S gUnk_02021448[];

u8 func_08004444(u8 i) { return gUnk_02021448[i].f; }
