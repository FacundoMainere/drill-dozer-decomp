#include "types.h"

extern void func_08006C68(u32);
extern void func_0801B064(u32);

void func_08085BA0(int a, u32 *b) {
    func_08006C68(b[1]);
    func_0801B064(b[0]);
    func_0801B064(b[1]);
}
