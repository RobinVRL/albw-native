#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00675a08;
extern undefined4 *DAT_00675a0c;
extern undefined4 DAT_00675a10;

// USA 0067597C <- EU 00675954 (Ghidra, non-matching)
// GLOBAL DAT_00675a08 uint *
// GLOBAL DAT_00675a0c undefined4 *
// GLOBAL DAT_00675a10 undefined4

void func_0067597C(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (((*DAT_00675a08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00675a08), iVar1 != 0)) {
    *DAT_00675a0c = DAT_00675a10;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_00675a0c), iVar1 == 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00675a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

