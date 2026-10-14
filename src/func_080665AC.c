#include "types.h"

extern u32 *func_0800098C(void);

u32 func_080665AC(void) {
    if (func_0800098C()[4] != 2)
        return 1;
    return 0;
}
