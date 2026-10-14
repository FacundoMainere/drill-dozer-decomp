#include "types.h"

extern void func_08001B34(u32);
extern void func_08001B48(u32);

void func_08018DC0(u32 a) {
    if (a == 0)
        func_08001B34(1);
    else
        func_08001B48(1);
}
