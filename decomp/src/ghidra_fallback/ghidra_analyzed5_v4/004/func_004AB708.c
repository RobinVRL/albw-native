#include "ghidra_types.h"


// USA 004AB708 <- EU 004AB6E0 (Ghidra, non-matching)

void func_004AB708(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x769c);
  iVar8 = *(int *)(param_1 + 0x76a0);
  iVar2 = 0;
  if (iVar7 != 0) {
    do {
      iVar3 = iVar2 + 1;
      puVar5 = (undefined4 *)(iVar8 + iVar2 * 0x38);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      iVar2 = iVar3;
    } while (iVar3 != iVar7);
  }
  piVar6 = *(int **)(param_1 + 0x76b4);
  piVar4 = piVar6 + *(int *)(param_1 + 0x76ac);
  for (; piVar6 != piVar4; piVar6 = piVar6 + 1) {
    iVar2 = *(int *)(*piVar6 + 4);
    uVar1 = 0;
    if (0 < iVar2) {
      do {
        iVar7 = *piVar6;
        if (uVar1 < *(uint *)(iVar7 + 4)) {
          puVar5 = (undefined4 *)(*(int *)(iVar7 + 8) + uVar1 * 0xc);
        }
        else {
          puVar5 = *(undefined4 **)(iVar7 + 8);
        }
        uVar1 = uVar1 + 1;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      } while ((int)uVar1 < iVar2);
    }
  }
  return;
}

