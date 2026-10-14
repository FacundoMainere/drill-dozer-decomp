#include "types.h"

void func_08011720(void);
u32 func_0806D5CC(void);
u32 func_08030650(void) {
    func_08011720();
    if (func_0806D5CC() == 1)
        return 1;
    return 0;
}
