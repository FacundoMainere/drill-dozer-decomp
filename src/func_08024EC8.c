extern void func_0801B064(int);

void func_08024EC8(int p) {
    int *q = (int *)(p + 0x7c);
    if (q[1] != 0) {
        func_0801B064(q[1]);
    }
}
