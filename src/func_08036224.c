struct S {
    int a;
    int b;
};

void func_08036224(char *a, struct S *b) { *(struct S *)(a + 424) = *b; }
