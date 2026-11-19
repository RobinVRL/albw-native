/* compilefix: USA 001514C8 (EU 001514C8), actor collision child check (BOOT_LOG 160aa):
 *   r0 = this+0x41C (child); if (!child) return 0;
 *   r0 = child->vt[0](child, this); if (this+0x410) *(u8 *)(this+0x410 + 0x44) = r0; return r0;
 * The matched C++ (work7/gpt16) is `void`, but callers use the result: the doorway / stairs update
 * 002611BC starts its walk-through only when it is 0. Natively the caller read a leftover eax, so
 * the walk-through triggered again right after it ended and Link walked back and forth between two
 * rooms (Hyrule Castle stairs, user slot 2). Confidence: high (7 instructions). */
#include <stdint.h>

int func_001514C8(char *self) {
    int *child = *(int **)(self + 0x41C);
    if (!child) return 0;
    typedef int (*Fn)(int *, char *);
    int r = ((Fn)(uintptr_t)*(uint32_t *)(uintptr_t)*(uint32_t *)child)(child, self);
    char *model = *(char **)(self + 0x410);
    if (model) *(uint8_t *)(model + 0x44) = (uint8_t)r;
    return r;
}
