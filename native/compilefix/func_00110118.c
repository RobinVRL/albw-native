/* compilefix: func_00110118, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_00110118.c) with `this` restored in method calls (on a
 * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */
#include "ghidra_types.h"

extern int func_00110AC0(int param_1,int param_2);

// USA 00110118 <- EU 00110118 (Ghidra, non-matching)

undefined4 func_00110118(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined1 *)(albw_frame + 0x18))
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0xffffffff;
    local_18 = 0;
    if ((*(ushort *)(param_2 + 0x18) & 0x10) == 0) {
      local_24 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) + 0x10) +
                 *(int *)(param_2 + 8) * 0x44;
    }
    local_20 = param_2;
    piVar2 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x10))(*(undefined4 **)(param_1 + 0x10));   /* this restored (vtable_this_fix) */
    return (**(code **)(*piVar2 + 0x14))(piVar2,&local_28);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  for (iVar1 = *(int *)(param_1 + 0x40); iVar1 = iVar1 - iVar3,
      iVar1 != (param_1 + 0x3c) - *(int *)(param_1 + 0x48); iVar1 = *(int *)(iVar1 + iVar3 + 4)) {
    func_00110AC0(iVar1,param_2);
  }
  return 0;
}

