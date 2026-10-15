extern int func_08095D34(int);
void func_080242C4(int a, unsigned char b) {
    unsigned char *p = (unsigned char *)a + 124;
    if (b != 20) {
        p[8] = func_08095D34(b);
    }
}
