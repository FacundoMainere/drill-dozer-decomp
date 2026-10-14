#include "types.h"

extern void func_08011720(void);
extern u32 func_08011890(void);

u32 func_08011894(void) {
    func_08011720();
    return func_08011890();
}
