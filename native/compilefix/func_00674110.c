/* compilefix: func_00674110, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00674110.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_0065B098(int param_1,undefined4 param_2);
extern int func_0065B104(int param_1);
extern int *DAT_006741d8;
extern uint *DAT_006741dc;
extern undefined4 *DAT_006741e0;
extern undefined4 DAT_006741e4;

// USA 00674110 <- EU 006740E8 (Ghidra, non-matching)
// GLOBAL DAT_006741d8 int *
// GLOBAL DAT_006741dc uint *
// GLOBAL DAT_006741e0 undefined4 *
// GLOBAL DAT_006741e4 undefined4

void func_00674110(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(*DAT_006741d8 + 0x44) == 0) {
    if ((param_1[0x25b] != 0) || (((param_1[0x25c] & 1) != 0 && (param_1[0x25c] != 0)))) {
      if (((*DAT_006741dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_006741dc), iVar1 != 0)) {
        *DAT_006741e0 = DAT_006741e4;
      }
      iVar1 = (**(code **)*param_1)(param_1,DAT_006741e0);
      puVar2 = (undefined4 *)0x0;
      if (iVar1 != 0) {
        puVar2 = param_1;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if ((param_1[0x25c] & 1) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)param_1[0x25b];
        }
        else {
          UNRECOVERED_JUMPTABLE =
               *(code **)(*(int *)((int)puVar2 + ((int)param_1[0x25c] >> 1)) + param_1[0x25b]);
        }
                    /* WARNING: Could not recover jumptable at 0x006741a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(puVar2) + ((int)param_1[0x25c] >> 1))));   /* this restored (pmf_this_fix) */
        return;
      }
    }
    puVar2 = param_1 + 0x243;
    func_0065B098((int)puVar2,3);
    func_003931EC(puVar2,3);
    func_0065B104((int)puVar2);
  }
  return;
}

