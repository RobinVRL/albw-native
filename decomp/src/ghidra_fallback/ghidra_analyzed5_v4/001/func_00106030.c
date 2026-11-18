#include "ghidra_types.h"

extern undefined4 *DAT_001060b8;
extern undefined4 *DAT_001060bc;

// USA 00106030 <- EU 00106030 (Ghidra, non-matching)
// GLOBAL DAT_001060b8 undefined4 *
// GLOBAL DAT_001060bc undefined4 *

void * func_00106030(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar1 = DAT_001060bc;
  if (param_1 != 0) {
    piVar4 = (int *)*DAT_001060b8;
    for (iVar2 = *piVar4; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      iVar3 = 0;
      do {
        puVar5 = (undefined4 *)(iVar2 + iVar3 * 0x10);
        if (puVar5[3] == param_1) {
          if (piVar4[2] == iVar2) {
            *(uint *)*puVar1 = *(uint *)*puVar1 | 1;
          }
          puVar5[3] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    return (void *)param_1;
  }
  return (void *)0x0;
}

