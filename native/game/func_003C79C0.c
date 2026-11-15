/* Matched sources that read game globals through integer-literal addresses (right on the ARM,
 * raw addresses natively), rewritten in C with the data symbols. Logic unchanged from:
 *   USA 003C79C0  src/work7/ds4/f_3C79C0.cpp      (u16 table at 0069E248: index of key)
 *   USA 00172704  src/work7/ds2/f_00172704.cpp    (globals 0070FB60, 00709DF8, 0070B728)
 *   USA 0025433C  src/work7/ds2/f_0025433C.cpp    (0070FB60)
 *   USA 0025915C  src/work7/ds2/f_0025915C.cpp    (0070D858)
 *   USA 00165E28  src/work8/nm3/v_165e.cpp        (0070B728)
 * (002DA4B8 / 002D40FC / 00518CCC: vtable literals, see func_002D40FC.c / func_00518CCC.c.)
 * Confidence: high. */
#include <stdint.h>

extern const uint16_t data_0069E248[];
extern void *data_0070FB60, *data_00709DF8, *data_0070B728, *data_0070D858;
extern int32_t func_00556E7C(void *p, int a);
extern int32_t func_00556E64(void *p);
extern void func_0065FE3C(void *p, int a);
extern void func_0014E2A0(void *a, void *b, void *c, int d, int e, int f);
extern float func_00523958(void *p);
extern void func_00258038(void *self, void *a, void *b, float f);

int32_t func_003C79C0(uint32_t key)
{
    const uint16_t *tab = data_0069E248;
    if (tab[0] == key) return 0;
    for (int i = 1; i <= 0x238; i += 2) {
        if (tab[i] == key) return (int16_t)i;
        if (tab[i + 1] == key) return (int16_t)(i + 1);
    }
    return -1;
}

uint32_t func_00172704(void *self)
{
    if (*(uint8_t *)((char *)self + 0x2ea) == 0) {
        if (func_00556E7C(data_0070FB60, 0xa1) != 0) {
            char *g = (char *)data_00709DF8;
            if (g != 0 && *(uint8_t *)(g + 0x18) == 0) *(uint8_t *)((char *)self + 0x2ea) = 1;
        }
    }
    return *(uint32_t *)((char *)data_0070B728 + 0x44) == 0 ? 1 : 0;
}

void func_0025433C(void *self)
{
    if (func_00556E64(data_0070FB60) == 0 && *(uint8_t *)((char *)self + 0x480) != 0)
        func_0065FE3C((char *)self + 0x420, 2);
    *(uint8_t *)((char *)self + 0x480) = 0;
    func_0014E2A0(self, *(void **)((char *)self + 0x45c), (char *)self + 0x460, 0x4000, 0, 0);
}

void func_0025915C(void *self)
{
    uint32_t *m3c = (uint32_t *)((char *)self + 0x3c);
    if (*m3c != 0) return;
    float v = func_00523958(data_0070D858);
    if (v < 0.75f) return;
    func_00258038(self, (void *)2, (void *)0x3c, 1.0f);
    *m3c = *m3c + 1;
}

uint32_t func_00165E28(void *self, uint16_t h)
{
    char *s = (char *)self;
    *(uint16_t *)(s + 0xec) = h;
    void *p = data_0070B728;
    if (p) p = *(void **)((char *)p + 0x44);
    if (p != 0 && p == self) {
        s[0xf8] = 1;
        s[0xfa] = 0;
        s[0xf9] = 1;
        *(uint16_t *)(s + 0xb2) = h;
        return 1;
    }
    return 0;
}
