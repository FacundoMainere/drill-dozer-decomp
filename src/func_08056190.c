int func_08056190(int *p) {
    int (*f)(int *) = (int (*)(int *))p[9];
    int r;
    if (f != 0)
        r = f(p);
    else
        r = 0;
    return r;
}
