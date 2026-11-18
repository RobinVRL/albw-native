#include "ghidra_types.h"

extern int func_00581B24(int param_1,int param_2);
extern int *DAT_00522cfc;

// USA 00522C70 <- EU 00522C48 (Ghidra, non-matching)
// GLOBAL DAT_00522cfc int *

undefined4 func_00522C70(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  
  iVar3 = -1;
  if ((*DAT_00522cfc != 0) &&
     (iVar1 = func_00581B24(*DAT_00522cfc,param_2), param_2 = extraout_r1, iVar1 != 0)) {
    iVar3 = (int)*(char *)(iVar1 + 0x3fc);
  }
  if (0 < *(int *)(param_1 + 0x90)) {
    param_2 = *(uint *)(param_1 + 0x90);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      if (uVar2 < param_2) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
      }
      else {
        iVar1 = 0;
      }
      if (*(short *)(iVar1 + 6) == iVar3) {
        if (uVar2 < param_2) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
        }
        else {
          iVar3 = 0;
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        goto joined_r0x00522cc4;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)param_2);
  }
  if (*(int *)(param_1 + 0xf74) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xf74) + 0x14);
joined_r0x00522cc4:
    if (iVar3 != 0) {
      return *(undefined4 *)(iVar3 + 4);
    }
  }
  return 3;
}

