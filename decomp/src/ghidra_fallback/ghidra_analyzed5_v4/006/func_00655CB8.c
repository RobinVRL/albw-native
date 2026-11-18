#include "ghidra_types.h"

extern int *DAT_00655cd4;
extern undefined4 DAT_00655cd8;

// USA 00655CB8 <- EU 00655C90 (Ghidra, non-matching)
// GLOBAL DAT_00655cd4 int *
// GLOBAL DAT_00655cd8 undefined4

undefined4 func_00655CB8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int *)(*DAT_00655cd4 + 0x3dbe8) + 0x10);
  iVar3 = *piVar2;
  if ((iVar3 != 0) && (iVar3 == *(int *)(param_1 + 0x2cc))) {
    *piVar2 = 0;
  }
  uVar1 = DAT_00655cd8;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00655cd8;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return (undefined4)param_1;
}

