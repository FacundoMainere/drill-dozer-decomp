struct S {
    unsigned char pad[9];
    unsigned char f : 1;
};
void func_0800B380(struct S *p, int v) { p->f = v; }
