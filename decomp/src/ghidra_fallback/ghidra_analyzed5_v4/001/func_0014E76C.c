#include "ghidra_types.h"

extern int func_001DF8C4(int param_1);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_0052782C(int param_1,int *param_2);

// USA 0014E76C <- EU 0014E76C (Ghidra, non-matching)

uint func_0014E76C(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x400) == 0) {
    uVar1 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x404);
    uVar1 = 0;
    iVar4 = *(int *)(param_1 + 0x404);
    for (iVar5 = *(int *)(param_1 + 0x3fc) - iVar6; iVar5 != (param_1 + 0x3f8) - iVar4;
        iVar5 = *(int *)(iVar5 + iVar6 + 4) - iVar6) {
      iVar2 = func_0052782C(iVar5,param_2);
      if (iVar2 != 0) {
        uVar3 = iVar2 + 0x100;
        bVar7 = *(char *)(iVar2 + 0x109) != '\0';
        if (bVar7) {
          uVar3 = (uint)*(byte *)(iVar2 + 0x10a);
        }
        if (bVar7 && uVar3 != 0) {
          uVar3 = func_001DF8C4(iVar2);
          uVar1 = uVar1 | uVar3;
          if (param_3 != 0) {
            func_0025B6A8(param_3,iVar2);
          }
        }
      }
    }
  }
  return uVar1;
}

