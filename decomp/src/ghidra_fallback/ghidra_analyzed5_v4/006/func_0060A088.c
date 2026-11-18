#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003ACBE0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a088;

// USA 0060A088 <- EU 0060A060 (Ghidra, non-matching)
// GLOBAL DAT_0060a088 undefined4

undefined4 func_0060A088(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a088);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003ACBE0(puVar1,param_1);
  }
  return 0;
}

