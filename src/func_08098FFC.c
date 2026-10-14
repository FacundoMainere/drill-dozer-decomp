extern void func_08005560(int);
extern void func_080066B8(int, int);

void func_08098FFC(unsigned char *p) {
    if (*(int *)(p + 4) != 0) {
        func_08005560(*(int *)(p + 4));
        func_080066B8(*(unsigned short *)(p + 2), 64);
    }
}
