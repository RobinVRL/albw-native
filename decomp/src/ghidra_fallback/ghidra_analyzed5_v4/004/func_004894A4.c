#include "ghidra_types.h"

extern int func_00532BA0(int param_1);
extern int func_0066F540(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00489504;
extern int *DAT_00489508;

// USA 004894A4 <- EU 0048947C (Ghidra, non-matching)
// GLOBAL DAT_00489504 int *
// GLOBAL DAT_00489508 int *

undefined4 func_004894A4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = func_00532BA0(param_1 + 0x38);
  if (iVar1 != 0) {
    uVar3 = *(uint *)(*DAT_00489504 + 0x18);
    uVar2 = uVar3 - 1;
    if (uVar2 < uVar3) {
      iVar1 = *(int *)(*(int *)(*DAT_00489504 + 0x20) + uVar2 * 4);
    }
    else {
      iVar1 = 0;
    }
    if ((*(uint *)(param_1 + 0x68) &
        *(uint *)(*DAT_00489508 + (uint)*(byte *)(iVar1 + 0x70) * 400 + 300)) == 0) {
      return func_0066F540((undefined4 *)(param_1 + 0x44),3);
    }
    func_0066F540((undefined4 *)(param_1 + 0x44),2);
  }
  return 0;
}

