#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00198AFC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603844;

// USA 00603844 <- EU 0060381C (Ghidra, non-matching)
// GLOBAL DAT_00603844 undefined4

undefined4 func_00603844(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603844);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00198AFC(puVar1,param_1);
  }
  return 0;
}

