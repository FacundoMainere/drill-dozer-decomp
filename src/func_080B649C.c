extern void func_08005560(int);

void func_080B649C(unsigned char *p) {
    if (p[14] != 0) {
        func_08005560(*(int *)(p + 16));
        func_08005560(*(int *)(p + 20));
    }
}
