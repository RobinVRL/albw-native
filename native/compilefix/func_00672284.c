/* compilefix: func_00672284, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00672284.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_0065AE94(int param_1,undefined4 param_2);
extern int func_0065AF00(int param_1);
extern uint *DAT_00672398;
extern undefined4 *DAT_0067239c;
extern undefined4 DAT_006723a0;

// USA 00672284 <- EU 0067225C (Ghidra, non-matching)
// GLOBAL DAT_00672398 uint *
// GLOBAL DAT_0067239c undefined4 *
// GLOBAL DAT_006723a0 undefined4

undefined4 func_00672284(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar3;
  
  if (*(char *)(param_1[0x144] + 4) == '\0') {
    puVar3 = param_1 + 0x243;
    if ((*(short *)(param_1 + 0x142) < 1) ||
       (param_1[0x167] = param_1[0x167] | 0x80, *(short *)(param_1 + 0x142) < 1)) {
      func_0065AE94((int)puVar3,5);
      func_003931EC(puVar3,5);
      return func_0065AF00((int)puVar3);
    }
    if ((param_1[0x25d] != 0) || (((param_1[0x25e] & 1) != 0 && (param_1[0x25e] != 0)))) {
      if (((*DAT_00672398 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00672398), iVar1 != 0)) {
        *DAT_0067239c = DAT_006723a0;
      }
      iVar1 = (**(code **)*param_1)(param_1,DAT_0067239c);
      puVar2 = (undefined4 *)0x0;
      if (iVar1 != 0) {
        puVar2 = param_1;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if ((param_1[0x25e] & 1) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)param_1[0x25d];
        }
        else {
          UNRECOVERED_JUMPTABLE =
               *(code **)(*(int *)((int)puVar2 + ((int)param_1[0x25e] >> 1)) + param_1[0x25d]);
        }
                    /* WARNING: Could not recover jumptable at 0x00672344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(puVar2) + ((int)param_1[0x25e] >> 1))));   /* this restored (pmf_this_fix) */
        return 0;
      }
    }
    func_0065AE94((int)puVar3,1);
    func_003931EC(puVar3,1);
    func_0065AF00((int)puVar3);
  }
  return 0;
}

