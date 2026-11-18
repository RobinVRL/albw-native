#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0065B098(int param_1,undefined4 param_2);
extern int func_0065B104(int param_1);
extern int DAT_00674d44;
extern int DAT_00674d48;
extern float DAT_00674d4c;
extern uint *DAT_00674d50;
extern undefined4 *DAT_00674d54;
extern undefined4 DAT_00674d58;

// USA 00674C5C <- EU 00674C34 (Ghidra, non-matching)
// GLOBAL DAT_00674d44 int
// GLOBAL DAT_00674d48 int
// GLOBAL DAT_00674d4c float
// GLOBAL DAT_00674d50 uint *
// GLOBAL DAT_00674d54 undefined4 *
// GLOBAL DAT_00674d58 undefined4

void func_00674C5C(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  func_0051D2F4(param_1 + 0x233,param_1[0x237],DAT_00674d48,DAT_00674d44,DAT_00674d4c);
  if (param_1[0x25f] == 0) {
    param_1[0x167] = param_1[0x167] | 0x100;
    if ((param_1[0x25b] != 0) || (((param_1[0x25c] & 1) != 0 && (param_1[0x25c] != 0)))) {
      if (((*DAT_00674d50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00674d50), iVar1 != 0)) {
        *DAT_00674d54 = DAT_00674d58;
      }
      iVar1 = (**(code **)*param_1)(param_1,DAT_00674d54);
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
                    /* WARNING: Could not recover jumptable at 0x00674d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    puVar2 = param_1 + 0x243;
    func_0065B098((int)puVar2,1);
    func_003931EC(puVar2,1);
    func_0065B104((int)puVar2);
  }
  return;
}

