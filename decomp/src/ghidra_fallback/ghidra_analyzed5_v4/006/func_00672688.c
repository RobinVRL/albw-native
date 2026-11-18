#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern int func_0065AE94(int param_1,undefined4 param_2);
extern int func_0065AF00(int param_1);
extern uint *DAT_00672748;
extern undefined4 *DAT_0067274c;
extern undefined4 DAT_00672750;

// USA 00672688 <- EU 00672660 (Ghidra, non-matching)
// GLOBAL DAT_00672748 uint *
// GLOBAL DAT_0067274c undefined4 *
// GLOBAL DAT_00672750 undefined4

void func_00672688(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 != 0) {
    if ((param_1[0x25b] != 0) || (((param_1[0x25c] & 1) != 0 && (param_1[0x25c] != 0)))) {
      if (((*DAT_00672748 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00672748), iVar1 != 0)) {
        *DAT_0067274c = DAT_00672750;
      }
      iVar1 = (**(code **)*param_1)(param_1,DAT_0067274c);
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
                    /* WARNING: Could not recover jumptable at 0x00672714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    puVar2 = param_1 + 0x243;
    func_0065AE94((int)puVar2,3);
    func_003931EC(puVar2,3);
    func_0065AF00((int)puVar2);
  }
  return;
}

