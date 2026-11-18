#include "ghidra_types.h"

extern int func_003FE664(int param_1,int param_2,int param_3);
extern int func_00404550(int param_1);

// USA 00569578 <- EU 00569550 (Ghidra, non-matching)

int * func_00569578(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  piVar2 = (int *)func_00404550(param_2);
  (**(code **)(*piVar2 + 0x24))
            (piVar2,*(undefined4 *)(param_1 + 4),param_4,*(undefined2 *)(param_1 + 0x38));
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 != 0) {
    uVar1 = *(ushort *)(piVar2 + 8);
    if ((uint)uVar1 < (uint)*(ushort *)((int)piVar2 + 0x22)) {
      *(ushort *)(piVar2 + 8) = uVar1 + 1;
      puVar3 = (undefined4 *)(piVar2[7] + (uint)uVar1 * 8);
      puVar3[1] = iVar6;
      *puVar3 = param_3;
    }
  }
  uVar4 = (**(code **)(*param_3 + 0x24))(param_3);
  uVar7 = 0;
  if ((int)(uint)*(byte *)(param_1 + 0x3a) <= (int)uVar4) {
    uVar4 = (uint)*(byte *)(param_1 + 0x3a);
  }
  if ((uVar4 & 0xff) != 0) {
    do {
      iVar6 = param_1 + uVar7 * 4;
      if (*(int *)(iVar6 + 0x14) != 0) {
        iVar5 = (**(code **)(*param_3 + 0x28))(param_3,uVar7);
        func_003FE664((int)piVar2,iVar5,*(int *)(iVar6 + 0x14));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uVar4 & 0xff));
  }
  return piVar2;
}

