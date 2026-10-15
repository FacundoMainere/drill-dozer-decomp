#include "types.h"

extern void func_08048450(u32, s32, u8 *, u32);

u32 func_0808B680(u8 *p) {
    func_08048450(*(u32 *)(p + 12), -15, p + 44, 0);
    return 0;
}
