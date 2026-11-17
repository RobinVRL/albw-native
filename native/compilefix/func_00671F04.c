/* compilefix: func_00671F04, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00671F04.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_0065AE94(int param_1,undefined4 param_2);
extern int func_0065AF00(int param_1);
extern uint *DAT_00671ff4;
extern undefined4 *DAT_00671ff8;
extern undefined4 DAT_00671ffc;

// USA 00671F04 <- EU 00671EDC (Ghidra, non-matching)
// GLOBAL DAT_00671ff4 uint *
// GLOBAL DAT_00671ff8 undefined4 *
// GLOBAL DAT_00671ffc undefined4

undefined4 func_00671F04(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar3;
  
  if (param_1[0x25f] == 0) {
    puVar3 = param_1 + 0x243;
    if ((param_1[0xb8] & 2) == 0) {
      if ((param_1[0x25b] != 0) || (((param_1[0x25c] & 1) != 0 && (param_1[0x25c] != 0)))) {
        if (((*DAT_00671ff4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00671ff4), iVar1 != 0))
        {
          *DAT_00671ff8 = DAT_00671ffc;
        }
        iVar1 = (**(code **)*param_1)(param_1,DAT_00671ff8);
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
                    /* WARNING: Could not recover jumptable at 0x00671fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(puVar2) + ((int)param_1[0x25c] >> 1))));   /* this restored (pmf_this_fix) */
          return 0;
        }
      }
      func_0065AE94((int)puVar3,3);
      func_003931EC(puVar3,3);
      return func_0065AF00((int)puVar3);
    }
    func_0065AE94((int)puVar3,8);
    func_003931EC(puVar3,8);
    func_0065AF00((int)puVar3);
  }
  return 0;
}

