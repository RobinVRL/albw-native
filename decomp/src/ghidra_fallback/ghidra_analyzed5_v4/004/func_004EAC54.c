#include "ghidra_types.h"

extern int func_0041E178(int param_1,int param_2);

// USA 004EAC54 <- EU 004EAC2C (Ghidra, non-matching)

void func_004EAC54(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < 4) {
    uVar6 = param_2;
    if (param_2 == 0) {
      func_0041E178(*(int *)(*(int *)(param_1 + 0x24) + 0x144),*(int *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
    else {
      iVar2 = ((int *)(param_1 + 0x10))[param_2];
      while ((iVar2 < 1 && (uVar6 = uVar6 - 1, uVar6 != 0))) {
        piVar1 = (int *)(param_1 + 0x10);
        if (uVar6 < 4) {
          piVar1 = piVar1 + uVar6;
        }
        iVar2 = *piVar1;
      }
    }
    piVar1 = (int *)(param_1 + 0x10);
    if (uVar6 < 4) {
      piVar1 = piVar1 + uVar6;
    }
    func_0041E178(*(int *)(*(int *)(param_1 + 0x24) + 0x144),*piVar1);
    iVar2 = param_2 + 1;
    if (0 < 4 - iVar2) {
      iVar3 = 0;
      iVar5 = 4 - iVar2;
      do {
        puVar4 = (undefined4 *)(param_1 + 0x10);
        if ((uint)(iVar2 + iVar3) < 4) {
          puVar4 = puVar4 + iVar2 + iVar3;
        }
        iVar5 = iVar5 + -1;
        iVar3 = iVar3 + 1;
        *puVar4 = 0xffffffff;
      } while (iVar5 != 0);
    }
    return;
  }
  return;
}

