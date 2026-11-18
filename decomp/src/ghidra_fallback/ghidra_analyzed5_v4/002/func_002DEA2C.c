#include "ghidra_types.h"

extern int func_001E01A8(int param_1,undefined4 param_2);
extern int func_0052EF6C(int param_1);
extern int func_0052F210(int param_1);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_002deaa0;

// USA 002DEA2C <- EU 002DEA08 (Ghidra, non-matching)
// GLOBAL DAT_002deaa0 int *

void func_002DEA2C(int param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_002deaa0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar6 = *(int *)(param_1 + 0x30);
    for (iVar5 = *(int *)(param_1 + 0x28) - iVar6; iVar5 != (param_1 + 0x24) - iVar6;
        iVar5 = *(int *)(iVar5 + iVar6 + 4) - iVar6) {
      bVar2 = func_0052EF6C(iVar5);
      if (bVar2) {
        uVar3 = func_0052F210(iVar5);
        iVar4 = func_005883B0(*piVar1,uVar3);
        if (iVar4 != 0x4000002 && iVar4 != 0x4000003) {
          func_001E01A8(iVar5,param_2);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  return;
}

