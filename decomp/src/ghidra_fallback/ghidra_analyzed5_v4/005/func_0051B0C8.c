#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051b194;
extern undefined4 DAT_0051b198;
extern undefined4 *DAT_0051b19c;
extern uint *DAT_0051b1a0;
extern undefined4 *DAT_0051b1a4;

// USA 0051B0C8 <- EU 0051B0A0 (Ghidra, non-matching)
// GLOBAL DAT_0051b194 uint *
// GLOBAL DAT_0051b198 undefined4
// GLOBAL DAT_0051b19c undefined4 *
// GLOBAL DAT_0051b1a0 uint *
// GLOBAL DAT_0051b1a4 undefined4 *

undefined4 func_0051B0C8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = DAT_0051b198;
  piVar3 = *(int **)(param_1 + 0x20);
  if (((*DAT_0051b194 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051b194), iVar1 != 0)) {
    *DAT_0051b19c = uVar2;
  }
  if ((piVar3 == (int *)0x0) || (iVar1 = (**(code **)*piVar3)(piVar3,DAT_0051b19c), iVar1 == 0)) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x20);
    if (((*DAT_0051b1a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051b1a0), iVar1 != 0)) {
      *DAT_0051b1a4 = uVar2;
    }
    if ((piVar3 == (int *)0x0) || (iVar1 = (**(code **)*piVar3)(piVar3,DAT_0051b1a4), iVar1 == 0)) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0051b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,param_2);
  return uVar2;
}

