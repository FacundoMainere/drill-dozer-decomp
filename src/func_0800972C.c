extern void func_080096FC(int, int);
void func_0800972C(int a, int b, int c) {
    func_080096FC(a, b);
    if (*(int *)(a + 64)) {
        func_080096FC(*(int *)(a + 64), c);
    }
}
