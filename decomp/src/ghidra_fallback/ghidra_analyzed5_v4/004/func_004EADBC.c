#include "ghidra_types.h"

extern int func_0041E1C4(int param_1);

// USA 004EADBC <- EU 004EAD94 (Ghidra, non-matching)

void func_004EADBC(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  if (3 < param_2) {
    return;
  }
  piVar5 = (int *)(param_1 + 0x10 + param_2 * 4);
  if (*piVar5 < 1) {
    iVar1 = func_0041E1C4(*(int *)(*(int *)(param_1 + 0x24) + 0x144));
    *piVar5 = iVar1;
    iVar1 = param_2 + 1;
    if (0 < 4 - iVar1) {
      iVar2 = 0;
      iVar4 = 4 - iVar1;
      do {
        puVar3 = (undefined4 *)(param_1 + 0x10);
        if ((uint)(iVar1 + iVar2) < 4) {
          puVar3 = puVar3 + iVar1 + iVar2;
        }
        iVar4 = iVar4 + -1;
        iVar2 = iVar2 + 1;
        *puVar3 = 0xffffffff;
      } while (iVar4 != 0);
    }
  }
  return;
}

