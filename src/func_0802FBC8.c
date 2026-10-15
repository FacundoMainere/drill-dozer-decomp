extern int func_08011720(void);
void func_0802FBC8(int a, int *b) {
    int *p = (int *)(func_08011720() + 0x160);
    int y = p[1];
    int x = p[0];
    b[0] = x;
    b[1] = y;
}
