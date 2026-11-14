/* USA 00688538: task factory of the "CapFader_UraOmote" task: new (0x210 bytes, align 4, on the
 * CreateArg's heap) and construct with 003BC2F0(task, arg, &SafeString name); returns the task
 * (the ARM tail-calls the constructor, which returns `this`; r0 = 0 when the allocation fails).
 * Native fix of the generated Ghidra text: typed void (round-3 return classes), so the factory
 * returned whatever was in eax (the stack canary) and createTask_ 0049D3D8 wrote through it.
 * Confidence: high. */
#include "ghidra_types.h"

extern int func_0010CF28(int size, int *heap, int align);
extern int func_003BC2F0(int self, int *arg, int *name);
extern int DAT_00688574;   /* sead::SafeString vtable */

int func_00688538(int *param_1)
{
    int name[2];
    int task = func_0010CF28(0x210, *(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4), 4);
    if (task == 0)
        return 0;
    name[0] = DAT_00688574;
    name[1] = (int)(uintptr_t)"CapFader_UraOmote";
    return func_003BC2F0(task, param_1, name);
}
