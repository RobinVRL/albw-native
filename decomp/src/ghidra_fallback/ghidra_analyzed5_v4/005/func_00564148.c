#include "ghidra_types.h"

extern undefined4 DAT_00564198;

// USA 00564148 <- EU 00564120 (Ghidra, non-matching)
// GLOBAL DAT_00564198 undefined4

undefined4 func_00564148(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_00564198;
  iVar3 = 0x130;
  iVar2 = (int)*(char *)(param_1 + 0x130);
  if (iVar2 != 0) {
    iVar3 = 0;
  }
  if (0 < iVar2) {
    do {
      if (*(int *)(param_1 + iVar3 * 0xc + 0x70) == param_2) {
        iVar2 = param_1 + iVar3 * 0xc;
        *param_3 = *(undefined4 *)(iVar2 + 0x74);
        *param_4 = *(undefined4 *)(iVar2 + 0x78);
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  *param_3 = 0;
  return uVar1;
}

