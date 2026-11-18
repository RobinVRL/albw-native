#include "ghidra_types.h"

extern int DAT_002766f4;

// USA 00276664 <- EU 0027668C (Ghidra, non-matching)
// GLOBAL DAT_002766f4 int

undefined4 func_00276664(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_1 + param_3 * DAT_002766f4 * 4;
  uVar1 = 0;
  uVar4 = *(uint *)(iVar2 + 0x1b40);
  if (0 < (int)uVar4) {
    do {
      if (uVar1 < uVar4) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x1b48) + uVar1 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x3c0) == param_2) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar4);
  }
  return 0;
}

