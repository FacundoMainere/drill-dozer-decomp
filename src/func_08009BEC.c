extern void func_08009DF8(void);
extern void func_08009878(int);
extern unsigned short gUnk_020345C8[];
void func_08009BEC(void) {
    unsigned short t = gUnk_020345C8[17];
    func_08009DF8();
    gUnk_020345C8[17] = t;
    func_08009878(75);
}
