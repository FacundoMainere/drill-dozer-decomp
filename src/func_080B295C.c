#include "types.h"

extern u8 *func_080B27D8(void);

u8 func_080B295C(void) { return *(func_080B27D8() + 0x7C); }
