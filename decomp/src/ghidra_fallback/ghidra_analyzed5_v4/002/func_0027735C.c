#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004A1520();
extern undefined4 DAT_002773cc;
extern int *DAT_002773d0;
extern int DAT_002773d4;
extern undefined *DAT_002773d8;

// USA 0027735C <- EU 00277384 (Ghidra, non-matching)
// GLOBAL DAT_002773cc undefined4
// GLOBAL DAT_002773d0 int *
// GLOBAL DAT_002773d4 int
// GLOBAL DAT_002773d8 undefined *

undefined4 * func_0027735C(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_002773d0;
  *param_1 = DAT_002773cc;
  iVar2 = DAT_002773d4;
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 0x3c) = 0;
  }
  func_00100950((int)(param_1 + 0x60f),DAT_002773d8,iVar2,0x40);
  puVar3 = func_004A1520(param_1);
  return puVar3;
}

