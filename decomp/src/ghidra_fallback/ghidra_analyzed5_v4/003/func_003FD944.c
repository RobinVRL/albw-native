#include "ghidra_types.h"


// USA 003FD944 <- EU 003FD924 (Ghidra, non-matching)

int func_003FD944(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int in_r3;
  uint uVar2;
  int unaff_r4;
  uint in_r12;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar3 = (int)param_2 < 0;
  bVar4 = param_2 == 0;
  if (!bVar3) {
    in_r12 = *(uint *)(param_1 + 0xc);
    bVar4 = in_r12 == param_2;
  }
  bVar5 = in_r12 < param_2;
  if (bVar4 || (bVar3 || (int)in_r12 < (int)param_2)) {
    return 0;
  }
  if ((bVar3 || !bVar5) && !bVar4) {
    unaff_r4 = *(int *)(param_1 + 0x10);
  }
  if (!bVar3 && bVar5 || bVar4) {
    in_r3 = *(int *)(param_1 + 0x10);
  }
  if ((bVar3 || !bVar5) && !bVar4) {
    in_r3 = unaff_r4 + param_2 * 0x10;
  }
  uVar2 = *(uint *)(in_r3 + 8);
  if (param_3 != (uint *)0x0) {
    if (param_2 < in_r12) {
      iVar1 = *(int *)(param_1 + 0x10) + param_2 * 0x10;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if (*(uint *)(iVar1 + 0xc) < uVar2) {
      return 0;
    }
    param_3[1] = *(uint *)(iVar1 + 0xc) - uVar2;
    *param_3 = uVar2;
  }
  return *(int *)(param_1 + 0x14) + uVar2;
}

