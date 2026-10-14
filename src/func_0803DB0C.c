#include "types.h"

extern u32 *func_0803D578(void);

u32 func_0803DB0C(void) {
    u32 v;
    u32 *p = func_0803D578();
    if ((v = p[2]) != 0)
        p[2] = 0;
    return v;
}
