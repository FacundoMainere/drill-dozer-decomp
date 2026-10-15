extern void func_08033650(int *);

void func_08033D68(int a) {
    int i;
    int *p = (int *)(a + 228);
    for (i = 5; i >= 0; i--) {
        func_08033650(p);
        p++;
    }
}
