#include "ghidra_types.h"

extern int func_00110DB8(int param_1,int param_2);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF6C(int param_1);
extern int func_0052F210(int param_1);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_002df088;

// USA 002DEFCC <- EU 002DEFA8 (Ghidra, non-matching)
// GLOBAL DAT_002df088 int *

void func_002DEFCC(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  piVar2 = DAT_002df088;
  iVar4 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    iVar7 = *(int *)(iVar4 + 0x30);
    piVar6 = (int *)(*(int *)(iVar4 + 0x28) - iVar7);
    iVar1 = *(int *)((int)piVar6 + iVar7 + 4);
    while (piVar6 != (int *)((iVar4 + 0x24) - iVar7)) {
      bVar3 = func_0052EF6C((int)piVar6);
      if (bVar3) {
        uVar5 = func_0052F210((int)piVar6);
        uVar5 = func_005883B0(*piVar2,uVar5);
        switch(uVar5) {
        case 0x4000002:
        case 0x4000003:
        case 0x4000005:
        case 0x4000006:
        case 0x4000007:
        case 0x400000a:
          break;
        default:
          func_00110DB8((int)piVar6,0x1e);
        }
      }
      else {
        func_002DEAD0(iVar4,piVar6);
      }
      piVar6 = (int *)(iVar1 - iVar7);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

