/* USA 002D40FC and 002DA4B8: matched sources (src/work8/perm_server/002D40FC_match_dh.cpp,
 * src/work7/ds3/func_002DA4B8.cpp) that store their vtable as an integer literal (0x6DD688 /
 * 0x6DD720): right on the ARM, a raw address natively. Same code with the vtable symbols. Both
 * return `this` (r0) as on the ARM (native/returns_this3.json). Confidence: high. */
#include <stdint.h>

extern void *func_0010DA7C(void *self, int a, int b);
extern void *func_0014D9C4(void *p);
extern uint32_t data_006DD688[], data_006DD720[];
extern void func_001DC844(void *p, int a);
extern void *func_0036746C(void *p);
extern void func_002D5D3C(void *p);

#define F32(p, o) (*(float *)((char *)(p) + (o)))
#define U32(p, o) (*(uint32_t *)((char *)(p) + (o)))
#define U8(p, o) (*(uint8_t *)((char *)(p) + (o)))
#define PW(p, o) ((char *)(uintptr_t)U32(p, o))

void *func_002D40FC(void *self)
{
    char *b = (char *)func_0010DA7C(self, 0, 3);
    *(uint32_t *)b = (uint32_t)(uintptr_t)data_006DD688;
    U32(b, 0x1c) = 0;
    U32(b, 0x20) = 0;
    F32(b, 0x24) = 0.0f;
    F32(b, 0x28) = 0.0f;
    char *r = (char *)func_0014D9C4(b + 0x30) - 0x30;
    U8(r, 0x38) = 0;
    U8(r, 0x39) = 0;
    F32(r, 0x10) = 600.0f;
    F32(r, 0x14) = 1.0f;
    U32(r, 0x18) = 0;
    U32(r, 0x1c) = 0;
    U32(r, 0x20) = 0;
    F32(r, 0x24) = 0.0f;
    F32(r, 0x34) = 0.0f;
    F32(r, 0x30) = 0.0f;
    return r;
}

void *func_002DA4B8(char *self)
{
    *(uint32_t *)self = (uint32_t)(uintptr_t)data_006DD720;
    if (U8(PW(self, 0x2c), 0xc8) == 0) {
        char *p = PW(self, 0x50);
        U8(p, 0x166) = 1;
        U8(PW(self, 0x28), 0x6c6) = 0;
        F32(PW(self, 0x4c), 0x100) = 1.0f;
        if (*(uint16_t *)(PW(self, 0x2c) + 0x42) == 0x90)
            func_001DC844(PW(self, 0x28), 0);
    }
    func_002D5D3C((char *)func_0036746C(self + 0xb8) - 0xb8);
    return self;
}
