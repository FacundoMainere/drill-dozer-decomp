#include "types.h"

extern void func_08011720(void);
extern u32 func_08020E38(void);

u32 func_08020E44(void) {
    func_08011720();
    return func_08020E38();
}
