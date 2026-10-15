extern void func_080B972C(int);
extern void func_08001768(int);
void func_080B91F8(int a) {
    func_080B972C(a);
    if (*(int *)(a + 0x78) != 0) {
        func_08001768(*(int *)(a + 0x78));
        *(int *)(a + 0x78) = 0;
    }
}
