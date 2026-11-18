#include "ghidra_types.h"


// USA 004A26A8 <- EU 004A2680 (Ghidra, non-matching)

void func_004A26A8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (param_2 < 0) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 4)) {
      do {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + iVar2 * 4);
        iVar2 = iVar2 + 1;
        if (*piVar3 != 0) {
          *piVar3 = 0;
        }
      } while (iVar2 < *(int *)(iVar1 + 4));
    }
    return;
  }
  piVar3 = (int *)(*(int *)(iVar1 + 8) + param_2 * 4);
  if (*piVar3 != 0) {
    *piVar3 = 0;
  }
  return;
}

