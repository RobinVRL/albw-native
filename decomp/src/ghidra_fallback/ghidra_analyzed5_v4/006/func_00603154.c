#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00164284(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603154;

// USA 00603154 <- EU 0060312C (Ghidra, non-matching)
// GLOBAL DAT_00603154 undefined4

undefined4 func_00603154(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603154);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00164284(puVar1,param_1);
  }
  return 0;
}

