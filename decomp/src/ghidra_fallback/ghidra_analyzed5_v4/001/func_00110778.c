#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_001107d4;

// USA 00110778 <- EU 00110778 (Ghidra, non-matching)
// GLOBAL DAT_001107d4 undefined4

undefined4 * func_00110778(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = DAT_001107d4;
  *param_1 = DAT_001107d4;
                    /* WARNING: Subroutine does not return */
  if (param_1[3] != 0) {
    func_0010C1B8(uVar1,param_1[3],param_3);
  }
                    /* WARNING: Subroutine does not return */
  if (param_1[4] != 0) {
    func_0010C1B8(param_1[4],0,param_3);
  }
  puVar2 = (undefined4 *)param_1[4];
  if (puVar2 != (undefined4 *)0x0) {
    do {
      puVar3 = (undefined4 *)puVar2[1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    param_1[4] = 0;
  }
  return param_1;
}

