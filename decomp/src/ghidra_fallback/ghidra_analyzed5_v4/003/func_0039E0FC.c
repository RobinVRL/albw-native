// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_005568E8(int param_1);
extern int func_005569D4();
extern int *DAT_0039e1ac;
extern undefined4 DAT_0039e1b0;

// USA 0039E0FC <- EU 0039E0D8 (Ghidra, non-matching)
// GLOBAL DAT_0039e1ac int *
// GLOBAL DAT_0039e1b0 undefined4

undefined4 func_0039E0FC(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  piVar2 = DAT_0039e1ac;
  if (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x50)) {
    return 0;
  }
  iVar4 = func_005568E8(*DAT_0039e1ac);
  if ((*(int *)(param_2 + 0x34) == 0) || (*(short *)(*(int *)(param_2 + 0x34) + 10) != 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(int *)(param_2 + 0x28) == iVar4) {
    bVar5 = *(uint *)(param_1 + 0x500) == *(uint *)(param_1 + 0x4fc);
    if (*(uint *)(param_1 + 0x500) <= *(uint *)(param_1 + 0x4fc)) {
      bVar5 = !bVar1;
    }
    if (!bVar5) {
      return 0;
    }
    iVar4 = func_005569D4(*piVar2,(float *)(*(int *)(param_1 + 0x430) + 0x24),
                          (float *)(param_2 + 0x10),*(uint *)(*(int *)(param_1 + 0x434) + 0x2c),0);
    uVar3 = DAT_0039e1b0;
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x500) = 5;
      *(undefined4 *)(param_1 + 0x504) = uVar3;
      *(undefined4 *)(param_1 + 0x4fc) = 0;
    }
  }
  return 1;
}

