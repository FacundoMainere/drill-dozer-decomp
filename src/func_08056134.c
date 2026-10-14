#include "types.h"

u32 func_08056134(u8 *p, u32 a, u32 b, u32 c) {
    void (*f)(u8 *, u32, u32, u32) = *(void (**)(u8 *, u32, u32, u32))(p + 28);
    if (f == 0) {
        return 0;
    }
    f(p, a, b, c);
    return 1;
}
