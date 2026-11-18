#include "ghidra_types.h"

extern int func_00522E00(int param_1);
extern int func_00581B24(int param_1,int param_2);
extern int func_00581C5C(int param_1);
extern int *DAT_00522db0;

// USA 00522D28 <- EU 00522D00 (Ghidra, non-matching)
// GLOBAL DAT_00522db0 int *

undefined4 func_00522D28(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_00522db0;
  iVar4 = -1;
  if (*DAT_00522db0 != 0) {
    iVar4 = func_00581B24(*DAT_00522db0,param_2);
    if (iVar4 == 0) {
      iVar4 = func_00581C5C(*piVar1);
      iVar4 = (int)*(char *)(iVar4 + 0x3fc);
      param_2 = extraout_r1_00;
    }
    else {
      iVar4 = (int)*(char *)(iVar4 + 0x3fc);
      param_2 = extraout_r1;
    }
  }
  if (0 < *(int *)(param_1 + 0x90)) {
    param_2 = *(uint *)(param_1 + 0x90);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      if (uVar2 < param_2) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (*(short *)(iVar5 + 6) == iVar4) {
        if (uVar2 < param_2) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
        }
        else {
          iVar4 = 0;
        }
        uVar3 = 0;
        if (*(int *)(iVar4 + 8) != 0) {
          uVar3 = *(undefined4 *)(*(int *)(iVar4 + 8) + 4);
        }
        return uVar3;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)param_2);
  }
  uVar3 = func_00522E00(param_1);
  return uVar3;
}

