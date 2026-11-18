#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0027FF60(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605c94;

// USA 00605C94 <- EU 00605C6C (Ghidra, non-matching)
// GLOBAL DAT_00605c94 undefined4

undefined4 func_00605C94(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605c94);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0027FF60(puVar1,param_1);
  }
  return 0;
}

