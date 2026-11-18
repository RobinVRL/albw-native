#include "ghidra_types.h"


// USA 0040F69C <- EU 0040F678 (Ghidra, function missing from the decomp table)

/* WARNING: Removing unreachable block (ram,0x003e6548) */
/* WARNING: Removing unreachable block (ram,0x003e6550) */
/* WARNING: Removing unreachable block (ram,0x003e6554) */
/* WARNING: Removing unreachable block (ram,0x003e6558) */
/* WARNING: Removing unreachable block (ram,0x003e6588) */
/* WARNING: Unknown calling convention */

void func_0040F69C(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0x40);
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      iVar2 = (*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44)) - param_2;
      goto LAB_0040f6a4;
    }
    iVar2 = *(int *)(param_1 + 0x3c);
  }
  iVar2 = param_2 + iVar2;
LAB_0040f6a4:
  iVar3 = *(int *)(param_1 + 0x40);
  if ((iVar2 < iVar3) || (iVar3 = iVar3 + *(int *)(param_1 + 0x44), iVar3 < iVar2)) {
    iVar2 = iVar3;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar2 != 0) {
    uVar4 = *(int *)(param_1 + 0x3c) + iVar2;
    uVar1 = *(uint *)(param_1 + 0x38);
    if (uVar4 <= *(uint *)(param_1 + 0x38)) {
      uVar1 = uVar4;
    }
    *(uint *)(param_1 + 0x3c) = uVar1;
  }
  return;
}

