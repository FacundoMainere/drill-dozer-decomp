extern int func_08031138(int);
int func_08021430(int a, int b) {
    int *p = *(int **)(a + 0x204);
    return *(int *)(func_08031138((int)p) + 24) & b;
}
