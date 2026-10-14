extern void func_080066B8(unsigned short, unsigned short);
extern void func_08005560(void *);
void func_0801B064(unsigned char *p) {
    func_080066B8(*(unsigned short *)(p + 16), *(unsigned short *)(p + 18));
    func_08005560(p);
}
