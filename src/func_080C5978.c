void func_080C5978(int a, unsigned char b) {
    unsigned char *p = (unsigned char *)(a + 0xA8);
    unsigned char z;
    z = 0;
    *p = b;
    *(unsigned char *)(a + 0xA9) = z;
}
