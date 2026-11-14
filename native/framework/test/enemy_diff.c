/* Differential check (-m32 only): native/framework/func_004FD464.c against the round-2 converted
 * Ghidra C (build/decomp/ghidra_fallback/ghidra_analyzed4/004/func_004FD464.c, compiled with
 * -Dfunc_004FD464=ghidra_004FD464) on identical inputs: the 0x900-byte object images must be
 * identical, and the only difference must be the argument block passed to 004FC798 (the lost
 * stack object the native version fixes). */
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define W(p, o) (*(uint32_t *)((char *)(p) + (o)))
int func_004FD464(void *self, uint32_t *arg, uint32_t *param);
int ghidra_004FD464(void *self, uint32_t *arg, uint32_t *param);

uint32_t data_006EDB00[64], data_006F4C98[4], data_007A9254[3] = { 1, 2, 3 }, data_007A9260[3] = { 4, 5, 6 };
uint8_t data_0069512C[0x60], data_0070A5A4[4] = { 0x5E };
uint32_t data_0070A5AC[1] = { 0xCAFEF00D }, data_0069513C[2] = { 0xA1, 0xA2 }, data_00709DF8;
void func_004FD414(void) {}
void func_004FC988(void) {}
void func_004F7DFC(void) {}
/* pool words of the converted source (EU literal pool 004FD934.. / 004FDD78..) */
int DAT_004fd934, *DAT_004fd938, *DAT_004fd93c, DAT_004fd940 = 0x3F800000, DAT_004fd944, DAT_004fd948;
int DAT_004fd94c = 0, DAT_004fd950 = 0x1F08, DAT_004fd954 = 0xDDF, DAT_004fd958 = 0x1F390003;
unsigned char *DAT_004fd95c, *DAT_004fd960, *DAT_004fd964;
uint32_t DAT_004fd968 = 0x3F99999A;
uint8_t *DAT_004fdd78; uint32_t *DAT_004fdd7c; float DAT_004fdd80 = -1.0f; uint32_t *DAT_004fdd84; int *DAT_004fdd88;

static char pool[4][0x400]; static int pool_n;
static char res[0x300]; static uint8_t fa[4] = { 0x42 }; static char ctx[0x20];
static uint8_t blk[12]; static int blk_n;
uint32_t func_00150E40(void *self, void *arg) { W(self, 0x2D0) = (uint32_t)res; W(self, 0x3A4) = 0; return (uint32_t)self; }
uint32_t func_0010BAB4(uint32_t size) { return (uint32_t)pool[pool_n++]; }
uint32_t func_004EE484(void *p) { return (uint32_t)p; }
uint32_t func_0032493C(void *p) { return (uint32_t)p; }
uint32_t func_0034CAA0(void *p) { return (uint32_t)p; }
uint32_t func_002B2590(void *p, void *o) { return (uint32_t)p; }
void *func_00100118(void *arr, void *ctor, uint32_t size, uint32_t n) { memset(arr, 0xEE, size * n); return arr; }
uint32_t func_004FA000(int z) { return (uint32_t)fa; }
uint32_t func_005330BC(void *r, void *n) { return 0x3C3C; }
uint32_t func_0014E428(void *s, uint32_t a, int32_t b, uint32_t c, int32_t st, uint8_t e, uint8_t f) { return a ^ b ^ c ^ st ^ e ^ f; }
int func_004FC798(void *l, uint32_t m, void *arg, float f) { memcpy(blk, arg, 12); blk_n++; return 1; }
int func_004F9A2C(void *s, void *n) { W(s, 0x8F0) += 1; return 0; }
int func_0054DD54(void *p, uint32_t i) { return 1; }
int func_0054DD3C(void *p, uint32_t i) { return 1; }
uint32_t func_0054D89C(void *s, uint32_t i) { return 0xB1; }

int main(void) {
    static char a[0x900], b[0x900]; static uint32_t prm[0x20];
    DAT_004fd934 = (int)data_006EDB00; DAT_004fd938 = (int *)data_007A9260; DAT_004fd93c = (int *)data_007A9254;
    DAT_004fd944 = (int)data_0069512C; DAT_004fd948 = (int)data_006F4C98;
    DAT_004fd95c = (unsigned char *)func_004FD414; DAT_004fd960 = (unsigned char *)func_004FC988;
    DAT_004fd964 = (unsigned char *)func_004F7DFC; DAT_004fdd78 = data_0070A5A4; DAT_004fdd7c = data_0070A5AC;
    DAT_004fdd84 = data_0069513C; DAT_004fdd88 = (int *)&data_00709DF8;
    W(data_0069512C, 0x50) = 0xD50; W(data_0069512C, 0x54) = 0xD54; W(res, 0x1C8 + 8) = 0x8E5;
    data_00709DF8 = (uint32_t)ctx; ctx[0x18] = 0x14;
    int bad = 0;
    for (uint32_t flags = 0; flags < 8; flags++) {
        for (int neg = 0; neg < 2; neg++) {
            memset(prm, 0, sizeof prm);
            prm[0] = flags; prm[1] = 0x40; prm[2] = 2; prm[3] = neg ? (uint32_t)-1 : 7; prm[0x11] = 0x1F3;
            uint8_t blk_a[12], blk_b[12];
            memset(a, 0xAB, sizeof a);
            memset(pool, 0, sizeof pool); pool_n = 0; blk_n = 0; memset(blk, 0x99, 12);
            func_004FD464(a, NULL, prm);
            memcpy(blk_a, blk, 12); int na = blk_n;
            memcpy(b, a, sizeof a); memset(a, 0xAB, sizeof a); /* same address: self-links compare */
            memset(pool, 0, sizeof pool); pool_n = 0; blk_n = 0; memset(blk, 0x99, 12);
            ghidra_004FD464(a, NULL, prm);
            memcpy(blk_b, blk, 12); int nb = blk_n;
            for (int i = 0; i < 0x900; i++)
                if (a[i] != b[i]) { printf("flags %u neg %d: byte +0x%X native %02X ghidra %02X\n", flags, neg, i, (uint8_t)b[i], (uint8_t)a[i]); bad++; break; }
            if (na != nb) { printf("flags %u: 004FC798 calls %d vs %d\n", flags, na, nb); bad++; }
            if (na && memcmp(blk_a, blk_b, 12) != 0 && flags == 0 && neg == 0)
                printf("expected difference (lost stack object): native %02X %02X.. ghidra %02X %02X..\n",
                       blk_a[0], blk_a[1], blk_b[0], blk_b[1]);
        }
    }
    printf(bad ? "enemy_diff: %d MISMATCHES\n" : "enemy_diff: object images identical (%d)\n", bad);
    return bad != 0;
}
