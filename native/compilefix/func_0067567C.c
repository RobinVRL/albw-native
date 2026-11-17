/* compilefix: func_0067567C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0067567C.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00675708;
extern undefined4 *DAT_0067570c;
extern undefined4 DAT_00675710;

// USA 0067567C <- EU 00675654 (Ghidra, non-matching)
// GLOBAL DAT_00675708 uint *
// GLOBAL DAT_0067570c undefined4 *
// GLOBAL DAT_00675710 undefined4

void func_0067567C(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (((*DAT_00675708 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00675708), iVar1 != 0)) {
    *DAT_0067570c = DAT_00675710;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_0067570c), iVar1 == 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00675700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(puVar2) + ((int)*(uint *)(param_1 + 0x104) >> 1))));   /* this restored (pmf_this_fix) */
    return;
  }
  return;
}

