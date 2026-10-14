extern void func_08005560(int, int, int);
void func_0802A810(int a, int *p) {
    int x = p[0];
    unsigned int v = *(unsigned short *)(x + 36);
    v = (v << 22) >> 22;
    *(unsigned short *)((char *)p + 28) = v;
    func_08005560(x, (int)p, v);
}
