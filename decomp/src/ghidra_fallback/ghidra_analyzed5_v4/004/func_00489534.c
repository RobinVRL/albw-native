#include "ghidra_types.h"

extern int func_0066F540(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0048956c;
extern int *DAT_00489570;

// USA 00489534 <- EU 0048950C (Ghidra, non-matching)
// GLOBAL DAT_0048956c int *
// GLOBAL DAT_00489570 int *

undefined4 func_00489534(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*DAT_0048956c + 0x18);
  uVar2 = uVar3 - 1;
  if (uVar2 < uVar3) {
    iVar1 = *(int *)(*(int *)(*DAT_0048956c + 0x20) + uVar2 * 4);
  }
  else {
    iVar1 = 0;
  }
  if ((*(uint *)(*DAT_00489570 + (uint)*(byte *)(iVar1 + 0x70) * 400 + 300) &
      *(uint *)(param_1 + 0x68)) == 0) {
    return func_0066F540((undefined4 *)(param_1 + 0x44),3);
  }
  return 0;
}

