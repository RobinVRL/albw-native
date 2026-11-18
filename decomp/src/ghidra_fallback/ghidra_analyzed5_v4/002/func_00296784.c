#include "ghidra_types.h"

extern int func_00537E04(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00296868;

// USA 00296784 <- EU 002967AC (Ghidra, non-matching)
// GLOBAL DAT_00296868 int *

void func_00296784(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = func_00587FCC(*DAT_00296868,param_2);
  if (iVar2 != -1) {
    uVar8 = 0;
    do {
      iVar3 = iVar1 + 0x14;
      if (uVar8 < 5) {
        iVar3 = iVar3 + uVar8 * 0x10;
      }
      if (*(int *)(iVar3 + 8) != 0) {
        iVar3 = iVar1 + 0x14;
        if (uVar8 < 5) {
          iVar3 = iVar3 + uVar8 * 0x10;
        }
        iVar7 = *(int *)(iVar3 + 0xc);
        iVar4 = iVar1 + 0x14;
        if (uVar8 < 5) {
          iVar4 = iVar4 + uVar8 * 0x10;
        }
        iVar6 = *(int *)(iVar4 + 0xc);
        for (iVar3 = *(int *)(iVar3 + 4) - iVar7; iVar3 != iVar4 - iVar6;
            iVar3 = *(int *)(iVar3 + iVar7 + 4) - iVar7) {
          iVar5 = func_00537E04(iVar3,iVar2);
          if (iVar5 != 0) {
            *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 0x100;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 3);
  }
  return;
}

