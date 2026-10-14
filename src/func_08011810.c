extern int *func_08011720(int);
void func_08011810(int a, int b) {
    int *p = func_08011720(a);
    p[4] &= ~b;
}
