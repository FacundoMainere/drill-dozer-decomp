typedef unsigned char u8;

void func_0808E1DC(int a, u8 b) {
    u8 **p = (u8 **)(a + 124);
    p[20][1] = p[20][0];
    p[20][0] = b;
}
