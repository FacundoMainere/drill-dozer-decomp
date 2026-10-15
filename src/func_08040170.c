extern int *func_08040168(int);
extern int func_0803D578(int);
void func_08040170(int a, int b) {
    int *p = func_08040168(a);
    p[25] = b;
    p[26] = func_0803D578(b);
}
