#include "ghidra_types.h"

extern int func_00130134(int param_1);
extern int func_0016B8DC(int param_1,undefined4 param_2,int param_3);
extern int func_001B6F24(int param_1,int param_2,int param_3);
extern int *DAT_0016b654;

// USA 0016B5B8 <- EU 0016B5B8 (Ghidra, non-matching)
// GLOBAL DAT_0016b654 int *

undefined4 func_0016B5B8(int param_1,int param_2,float fparam_0)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0xf74);
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0xf74) = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    uVar4 = *(uint *)(param_1 + 0x90);
    do {
      if (uVar1 < uVar4) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x98) + uVar1 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (*(short *)(iVar5 + 6) == param_2) {
        if (uVar1 < uVar4) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x98) + uVar1 * 4);
        }
        else {
          uVar2 = 0;
        }
        *(undefined4 *)(param_1 + 0xf74) = uVar2;
        break;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar4);
  }
  func_001B6F24(*(int *)(param_1 + 0xf74),(int)fparam_0,iVar3);
  func_00130134(*DAT_0016b654);
  return func_0016B8DC(param_1,extraout_r1,iVar3);
}

