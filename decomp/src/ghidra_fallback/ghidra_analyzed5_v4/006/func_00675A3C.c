#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00675ac8;
extern undefined4 *DAT_00675acc;
extern undefined4 DAT_00675ad0;

// USA 00675A3C <- EU 00675A14 (Ghidra, non-matching)
// GLOBAL DAT_00675ac8 uint *
// GLOBAL DAT_00675acc undefined4 *
// GLOBAL DAT_00675ad0 undefined4

void func_00675A3C(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (((*DAT_00675ac8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00675ac8), iVar1 != 0)) {
    *DAT_00675acc = DAT_00675ad0;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_00675acc), iVar1 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if ((puVar2 != (undefined4 *)0x0) &&
     ((UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x100), UNRECOVERED_JUMPTABLE != (code *)0x0 ||
      (((*(uint *)(param_1 + 0x104) & 1) != 0 && (*(uint *)(param_1 + 0x104) != 0)))))) {
    if ((*(uint *)(param_1 + 0x104) & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE +
                     *(int *)((int)puVar2 + ((int)*(uint *)(param_1 + 0x104) >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00675ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

