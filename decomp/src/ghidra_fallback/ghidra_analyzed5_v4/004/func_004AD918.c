#include "ghidra_types.h"

extern int *DAT_004ad9b8;
extern int DAT_004ad9bc;

// USA 004AD918 <- EU 004AD8F0 (Ghidra, non-matching)
// GLOBAL DAT_004ad9b8 int *
// GLOBAL DAT_004ad9bc int

undefined4 func_004AD918(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar4 = *DAT_004ad9b8;
  if (*(int *)(param_1 + 0x772c) != 0) {
    *(undefined4 *)(DAT_004ad9bc + param_1) = 0;
    *(int *)(param_1 + 0x772c) = 0;
  }
  if ((int)*(char *)(iVar4 + 0x18) - 9U < 0xd) {
    piVar1 = *(int **)(param_1 + 0x76b4);
    piVar7 = piVar1 + *(int *)(param_1 + 0x76ac);
    for (; piVar1 != piVar7; piVar1 = piVar1 + 1) {
      iVar4 = *(int *)(*piVar1 + 4);
      uVar3 = 0;
      if (0 < iVar4) {
        do {
          iVar5 = *piVar1;
          if (uVar3 < *(uint *)(iVar5 + 4)) {
            puVar6 = (undefined4 *)(*(int *)(iVar5 + 8) + uVar3 * 0xc);
          }
          else {
            puVar6 = *(undefined4 **)(iVar5 + 8);
          }
          uVar3 = uVar3 + 1;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        } while ((int)uVar3 < iVar4);
      }
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return uVar2;
}

