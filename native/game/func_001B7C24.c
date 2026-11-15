#include "ghidra_types.h"

/* USA 001B7C24 (EU 001B7C24)  VRAM-capable resource allocator, virtual +0x08:
 * alloc(this, int bank, int type, int /r3 unused/, int size) -> address or 0.
 * Alignment by type: 0x100 -> 4, 0x102 -> 0x20, 0x103 -> 0xC0, 0x104 / 0x105 -> 0x10, else 0x80.
 * Bank 0x20000 (VRAM A, block +0x20) / 0x30000 (VRAM B, block +0x24): bump allocation, the
 * block's current pointer (+8) rounded up to the alignment (signed division toward zero, as the
 * __aeabi_idivmod call 001104E4), then advanced by size; bank 0x10000: heap allocation
 * 0010CEE0(size, heap (+0x28, else the current heap 0010DB90), alignment) when size > 0;
 * other banks: 0.
 * Bug fixed: the size is the 5th argument (the stack word at sp + 0x18 after the 6-register
 * push); Ghidra printed the function with 4 parameters, so its param_4 took r3 (always 0 at the
 * caller 00233F4C) and VRAM bank allocations never advanced: every model file's raw-data section
 * landed at the same VRAM address and overwrote the previous ones (title overworld meshes and
 * BlackFilter drawn from another file's data). CLASS stack parameter after an unused r3 (Ghidra
 * `PARAM param_4 Stack[0x0]` with no r3 parameter). From the EU machine code. High. */
extern int func_0010CEE0(int size, int *heap, int align);
extern int func_0010DB90(void);

int func_001B7C24(int self, int bank, int type, int unused_r3, int size)
{
    int align = 0x80;
    switch (type) {
    case 0x100: align = 4; break;
    case 0x102: align = 0x20; break;
    case 0x103: align = 0xC0; break;
    case 0x104:
    case 0x105: align = 0x10; break;
    default: break;
    }
    (void)unused_r3;
    if (bank == 0x10000) {
        if (size <= 0) return 0;
        int *heap = *(int **)(self + 0x28);
        if (!heap) heap = (int *)func_0010DB90();
        return func_0010CEE0(size, heap, align);
    }
    int blk;
    if (bank == 0x20000) blk = *(int *)(self + 0x20);
    else if (bank == 0x30000) blk = *(int *)(self + 0x24);
    else return 0;
    int cur = *(int *)(blk + 8);
    int q = cur < 0 ? (cur - align + 1) / align : (cur + align - 1) / align;
    int addr = q * align;
    *(int *)(blk + 8) = addr + size;
    return addr;
}
