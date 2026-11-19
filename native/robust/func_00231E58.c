/* USA 00231E58 (EU 00231E34): step a small state machine: call the current state's member function
 *     (self->obj ->* self->table[self->idx])();
 *     ++self->count; if (self->model) 00352210(self->model, 1, (float)self->count);
 * The matched C++ source does the call with the x86 compiler's pointer-to-member rules, but the
 * table holds ARM ABI PMFs {ptr, adj}: virtual = (adj & 1) with ptr = vtable byte offset. x86 reads
 * a virtual entry {0x10, 1} as the plain address 0x10: the game jumped to 0x10 (user crash, frame
 * 15644). Same layout as the source's struct T: +0x4C count, +0x50 s8 index, +0x5C model,
 * +0x60 object, +0x68 table of 8-byte PMFs. */
#include "robust_pmf.h"

void func_00352210(void *model, uint32_t a, float f);

void func_00231E58(char *self) {
    char *obj = FLD(self, 0x60, char *);
    int8_t idx = FLD(self, 0x50, int8_t);
    const albw_pmf *m = (const albw_pmf *)(FLD(self, 0x68, char *) + 8 * idx);
    if (obj && albw_pmf_valid(m)) {
        char *t = albw_pmf_this(m, obj);
        void *fn = albw_pmf_fn(m, t);
        if (albw_code_ptr(fn))
            ((void (*)(char *))fn)(t);
    }
    uint32_t c = ++FLD(self, 0x4C, uint32_t);
    void *model = FLD(self, 0x5C, void *);
    if (model)
        func_00352210(model, 1, (float)c);
}
