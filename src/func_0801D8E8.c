#include "types.h"

struct S {
    u8 pad[12];
    u8 c;
    u8 pad2[23];
    u8 *p;
};
extern struct S *gUnk_02035878;
void func_0801D624(struct S *);
void func_0801D8E8(void) {
    struct S *s = gUnk_02035878;
    s->c = s->p[1];
    func_0801D624(s);
}
