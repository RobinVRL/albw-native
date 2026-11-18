#include "ghidra_types.h"

extern int func_00317414(int param_1);
extern int *DAT_003177f4;
extern int DAT_003177f8;

// USA 00317788 <- EU 00317764 (Ghidra, non-matching)
// GLOBAL DAT_003177f4 int *
// GLOBAL DAT_003177f8 int

void func_00317788(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  func_00317414(param_1);
  if (*(char *)(param_1 + 0x43c) != '\0') {
    piVar2 = *(int **)(DAT_003177f8 + *DAT_003177f4);
    iVar3 = 1;
    iVar1 = *(int *)(*DAT_003177f4 + 0x3dbc8) - (int)piVar2 >> 2;
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
  return;
}

