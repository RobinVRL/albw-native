#include "ghidra_types.h"


// USA 0048C258 <- EU 0048C230 (Ghidra, non-matching)

void func_0048C258(int *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = param_1[2];
  if (1 < *param_1) {
    iVar6 = 0;
    iVar1 = iVar6;
    iVar3 = *param_1 + -1;
    iVar7 = iVar6;
    do {
      for (; iVar8 = iVar1, iVar6 < iVar3; iVar6 = iVar6 + 1) {
        iVar5 = iVar4 + iVar6 * 4;
        iVar1 = (*(code *)param_2)(*(undefined4 *)(iVar4 + iVar6 * 4),*(undefined4 *)(iVar5 + 4));
        if (0 < iVar1) {
          uVar2 = *(undefined4 *)(iVar5 + 4);
          *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + iVar6 * 4);
          *(undefined4 *)(iVar4 + iVar6 * 4) = uVar2;
          iVar8 = iVar6;
        }
        iVar1 = iVar8;
      }
      iVar6 = iVar8;
      iVar1 = iVar8;
      if (iVar7 == iVar8) {
        return;
      }
      for (; iVar7 < iVar1; iVar1 = iVar1 + -1) {
        iVar5 = iVar4 + iVar1 * 4;
        iVar3 = (*(code *)param_2)(*(undefined4 *)(iVar4 + iVar1 * 4),*(undefined4 *)(iVar5 + -4));
        if (iVar3 < 0) {
          uVar2 = *(undefined4 *)(iVar5 + -4);
          *(undefined4 *)(iVar5 + -4) = *(undefined4 *)(iVar4 + iVar1 * 4);
          *(undefined4 *)(iVar4 + iVar1 * 4) = uVar2;
          iVar6 = iVar1;
        }
      }
      iVar1 = iVar6;
      iVar3 = iVar8;
      iVar7 = iVar6;
    } while (iVar6 != iVar8);
  }
  return;
}

