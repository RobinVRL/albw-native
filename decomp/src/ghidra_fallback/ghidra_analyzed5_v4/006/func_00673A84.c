#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_0065B098(int param_1,undefined4 param_2);
extern int func_0065B104(int param_1);
extern uint *DAT_00673b74;
extern undefined4 *DAT_00673b78;
extern undefined4 DAT_00673b7c;

// USA 00673A84 <- EU 00673A5C (Ghidra, non-matching)
// GLOBAL DAT_00673b74 uint *
// GLOBAL DAT_00673b78 undefined4 *
// GLOBAL DAT_00673b7c undefined4

undefined4 func_00673A84(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar3;
  
  if (param_1[0x25f] == 0) {
    puVar3 = param_1 + 0x243;
    if ((param_1[0xb8] & 2) == 0) {
      if ((param_1[0x25b] != 0) || (((param_1[0x25c] & 1) != 0 && (param_1[0x25c] != 0)))) {
        if (((*DAT_00673b74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00673b74), iVar1 != 0))
        {
          *DAT_00673b78 = DAT_00673b7c;
        }
        iVar1 = (**(code **)*param_1)(param_1,DAT_00673b78);
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
                    /* WARNING: Could not recover jumptable at 0x00673b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return 0;
        }
      }
      func_0065B098((int)puVar3,3);
      func_003931EC(puVar3,3);
      return func_0065B104((int)puVar3);
    }
    func_0065B098((int)puVar3,8);
    func_003931EC(puVar3,8);
    func_0065B104((int)puVar3);
  }
  return 0;
}

