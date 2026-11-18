#include "ghidra_types.h"

extern int func_00110DB8(int param_1,int param_2);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF6C(int param_1);
extern int func_0052F210(int param_1);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_002df088;

// USA 002DEFD8 <- EU 002DEFB4 (Ghidra, non-matching)
// GLOBAL DAT_002df088 int *

void func_002DEFD8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  piVar2 = DAT_002df088;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar6 = *(int *)(param_1 + 0x30);
    piVar5 = (int *)(*(int *)(param_1 + 0x28) - iVar6);
    iVar1 = *(int *)((int)piVar5 + iVar6 + 4);
    while (piVar5 != (int *)((param_1 + 0x24) - iVar6)) {
      bVar3 = func_0052EF6C((int)piVar5);
      if (bVar3) {
        uVar4 = func_0052F210((int)piVar5);
        uVar4 = func_005883B0(*piVar2,uVar4);
        switch(uVar4) {
        case 0x4000002:
        case 0x4000003:
        case 0x4000005:
        case 0x4000006:
        case 0x4000007:
        case 0x400000a:
          break;
        default:
          func_00110DB8((int)piVar5,param_2);
          if (param_2 == 0) goto LAB_002df068;
        }
      }
      else {
LAB_002df068:
        func_002DEAD0(param_1,piVar5);
      }
      piVar5 = (int *)(iVar1 - iVar6);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

