/* compilefix: func_006758BC, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_006758BC.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00675948;
extern undefined4 *DAT_0067594c;
extern undefined4 DAT_00675950;

// USA 006758BC <- EU 00675894 (Ghidra, non-matching)
// GLOBAL DAT_00675948 uint *
// GLOBAL DAT_0067594c undefined4 *
// GLOBAL DAT_00675950 undefined4

void func_006758BC(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (((*DAT_00675948 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00675948), iVar1 != 0)) {
    *DAT_0067594c = DAT_00675950;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_0067594c), iVar1 == 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00675940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(puVar2) + ((int)*(uint *)(param_1 + 0x104) >> 1))));   /* this restored (pmf_this_fix) */
    return;
  }
  return;
}

