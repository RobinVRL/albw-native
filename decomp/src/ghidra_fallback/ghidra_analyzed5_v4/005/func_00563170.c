#include "ghidra_types.h"

extern undefined4 DAT_005631f4;

// USA 00563170 <- EU 00563148 (Ghidra, non-matching)
// GLOBAL DAT_005631f4 undefined4

undefined4 * func_00563170(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = DAT_005631f4;
  iVar6 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) + -1;
  uVar7 = (*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) - 1;
  if (*param_1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 3;
  }
  *param_2 = uVar4;
  param_2[1] = uVar1;
  uVar3 = *(uint *)(param_1 + 4);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (*(int *)(param_1 + 0x14) <= (int)uVar3) {
    uVar3 = *(int *)(param_1 + 0x14) - 1;
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 < 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) <= iVar5) {
      iVar5 = *(int *)(param_1 + 0x18) + -1;
    }
    uVar2 = iVar5 << 0x10;
  }
  param_2[2] = uVar2 | uVar3;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else {
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    uVar7 = uVar7 | iVar6 << 0x10;
  }
  param_2[3] = uVar7;
  return param_2 + 4;
}

