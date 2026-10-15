extern void *func_08001728(int);
extern void *gUnk_0203589C;

void func_0802B100(void) {
    void **q = &gUnk_0203589C;
    unsigned char *p;
    *q = func_08001728(100);
    p = (unsigned char *)*q;
    p[97] = 1;
}
