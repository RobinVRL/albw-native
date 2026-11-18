#include "ghidra_types.h"

extern int func_00110DB8(int param_1,int param_2);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF6C(int param_1);
extern int func_0052F210(int param_1);
extern int func_00588224(int param_1,uint param_2,uint param_3);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_002deed0;

// USA 002DEE24 <- EU 002DEE00 (Ghidra, non-matching)
// GLOBAL DAT_002deed0 int *

void func_002DEE24(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar2 = DAT_002deed0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar7 = *(int *)(param_1 + 0x30);
    piVar6 = (int *)(*(int *)(param_1 + 0x28) - iVar7);
    iVar1 = *(int *)((int)piVar6 + iVar7 + 4);
    while (piVar6 != (int *)((param_1 + 0x24) - iVar7)) {
      bVar3 = func_0052EF6C((int)piVar6);
      if (bVar3) {
        uVar4 = func_0052F210((int)piVar6);
        iVar5 = func_005883B0(*piVar2,uVar4);
        if (iVar5 != 0x4000002 && iVar5 != 0x4000003) {
          uVar4 = func_0052F210((int)piVar6);
          iVar5 = func_00588224(*piVar2,uVar4,0x10);
          if ((iVar5 == 0) && (func_00110DB8((int)piVar6,param_2), param_2 == 0)) goto LAB_002deeb0;
        }
      }
      else {
LAB_002deeb0:
        func_002DEAD0(param_1,piVar6);
      }
      piVar6 = (int *)(iVar1 - iVar7);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

