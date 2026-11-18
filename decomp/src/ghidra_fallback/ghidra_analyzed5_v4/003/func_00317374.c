#include "ghidra_types.h"

extern int func_00664ED8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_003173e8;
extern int DAT_003173ec;

// USA 00317374 <- EU 00317350 (Ghidra, non-matching)
// GLOBAL DAT_003173e8 int *
// GLOBAL DAT_003173ec int

undefined4 func_00317374(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x43c) != '\0') {
    piVar2 = *(int **)(DAT_003173ec + *DAT_003173e8);
    iVar3 = 1;
    iVar1 = *(int *)(*DAT_003173e8 + 0x3dbc8) - (int)piVar2 >> 2;
    if (1 < iVar1 + 1) {
      do {
        if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x50) == *(int *)(param_1 + 0x50))) {
          *(uint *)(*piVar2 + 0x2e0) = *(uint *)(*piVar2 + 0x2e0) | 2;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < iVar1 + 1);
    }
  }
  return func_00664ED8((undefined4 *)(param_1 + 0x40c),2);
}

