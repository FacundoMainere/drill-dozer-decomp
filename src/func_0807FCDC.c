#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_0807E98C(u32);

void func_0807FCDC(u32 a, u8 *b) {
    func_080067CC(*(u32 *)(b + 44), b + 48);
    func_0807E98C(*(u32 *)(b + 44));
}
