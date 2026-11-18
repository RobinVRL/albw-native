#include "ghidra_types.h"


// USA 0041D9A0 <- EU 0041D980 (Ghidra, non-matching)

undefined4 func_0041D9A0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  code *unaff_r6;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  local_2c = 0;
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = 0;
  iVar7 = param_1 + 8;
  bVar1 = true;
  if (iVar7 != *(int *)(param_1 + 8)) {
    do {
      iVar7 = *(int *)(iVar7 + 4);
      iVar6 = iVar6 + -1;
      if ((iVar5 == 0) && (*(int *)(iVar7 + 8) != 0)) {
        iVar5 = *(int *)(iVar7 + 0x10);
        unaff_r6 = *(code **)(iVar5 + 0x10);
        param_3 = *(int *)(iVar5 + 0x14);
        iVar5 = *(int *)(iVar5 + 8) + *(int *)(iVar5 + 0xc);
      }
      piVar3 = *(int **)(iVar7 + 0xc);
      if (*(int **)(iVar7 + 0xc) != (int *)(iVar7 + 0xc)) {
        do {
          piVar4 = (int *)*piVar3;
          if (unaff_r6 != (code *)piVar3[4] || param_3 != piVar3[5]) {
            bVar1 = false;
            break;
          }
          piVar3 = piVar4;
        } while (piVar4 != (int *)(iVar7 + 0xc));
      }
      iVar2 = iVar7;
    } while ((iVar6 != param_2) && (iVar2 = local_30, iVar7 != *(int *)(param_1 + 8)));
    local_30 = iVar2;
    if (iVar5 != 0 && bVar1) {
      if (unaff_r6 != (code *)0x0) {
        (*unaff_r6)(local_30,iVar5 - local_30);
      }
      local_2c = 1;
    }
  }
  return local_2c;
}

