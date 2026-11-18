#include "ghidra_types.h"

extern int *DAT_00602744;

// USA 006026E0 <- EU 006026B8 (Ghidra, non-matching)
// GLOBAL DAT_00602744 int *

void func_006026E0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = *DAT_00602744;
  puVar2 = (undefined4 *)(iVar4 + 0x6a0);
  if (param_1 == 0x10) {
    *puVar2 = 0;
    *(undefined4 *)(iVar4 + 0x6e8) = 0;
    return;
  }
  puVar3 = (undefined4 *)(iVar4 + 0x458 + param_1 * 0x18);
  uVar1 = *puVar3;
  puVar2[param_1 + 1] = uVar1;
  puVar2[param_1 + 0x13] = uVar1;
  iVar4 = puVar3[2];
  bVar6 = iVar4 == 0x1400;
  if (!bVar6) {
    iVar4 = iVar4 + -0x1401;
    bVar6 = iVar4 == 0;
  }
  if (bVar6) {
    iVar4 = 1;
  }
  else if (iVar4 == 1) {
    iVar4 = 2;
  }
  else if (iVar4 == 5) {
    iVar4 = 4;
  }
  else {
    iVar4 = 0;
  }
  iVar5 = puVar3[3];
  if (iVar5 == 0) {
    iVar5 = puVar3[1] * iVar4;
  }
  puVar2[param_1 + 0x23] = iVar5;
  return;
}

