#include "ghidra_types.h"

extern int func_00537E04(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00296868;

// USA 0029678C <- EU 002967B4 (Ghidra, non-matching)
// GLOBAL DAT_00296868 int *

void func_0029678C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = func_00587FCC(*DAT_00296868,param_2);
  if (iVar1 != -1) {
    uVar7 = 0;
    do {
      iVar2 = param_1 + 0x14;
      if (uVar7 < 5) {
        iVar2 = iVar2 + uVar7 * 0x10;
      }
      if (*(int *)(iVar2 + 8) != 0) {
        iVar2 = param_1 + 0x14;
        if (uVar7 < 5) {
          iVar2 = iVar2 + uVar7 * 0x10;
        }
        iVar6 = *(int *)(iVar2 + 0xc);
        iVar3 = param_1 + 0x14;
        if (uVar7 < 5) {
          iVar3 = iVar3 + uVar7 * 0x10;
        }
        iVar5 = *(int *)(iVar3 + 0xc);
        for (iVar2 = *(int *)(iVar2 + 4) - iVar6; iVar2 != iVar3 - iVar5;
            iVar2 = *(int *)(iVar2 + iVar6 + 4) - iVar6) {
          iVar4 = func_00537E04(iVar2,iVar1);
          if (iVar4 != 0) {
            *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x100;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 3);
  }
  return;
}

