extern void func_0809060C(int *, int *);
extern void func_0801BF58(int *, int);

void func_08090938(int *a) {
    int *p = (int *)((char *)a + 124);
    func_0809060C(a, p);
    func_0801BF58(p, p[2]);
}
