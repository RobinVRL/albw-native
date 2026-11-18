#include "ghidra_types.h"


// USA 004A26B0 <- EU 004A2688 (Ghidra, non-matching)

void func_004A26B0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        piVar2 = (int *)(*(int *)(param_1 + 8) + iVar1 * 4);
        iVar1 = iVar1 + 1;
        if (*piVar2 != 0) {
          *piVar2 = 0;
        }
      } while (iVar1 < *(int *)(param_1 + 4));
    }
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 8) + param_2 * 4);
  if (*piVar2 != 0) {
    *piVar2 = 0;
  }
  return;
}

