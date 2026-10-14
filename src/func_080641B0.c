#include "types.h"

extern void func_08064B10(u32 *);

u32 func_080641B0(u32 *p) {
    (*p)++;
    func_08064B10(p);
    return 0;
}
