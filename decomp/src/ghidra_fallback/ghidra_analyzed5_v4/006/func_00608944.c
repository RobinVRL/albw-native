#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0033DF60(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608944;

// USA 00608944 <- EU 0060891C (Ghidra, non-matching)
// GLOBAL DAT_00608944 undefined4

undefined4 func_00608944(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608944);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0033DF60(puVar1,param_1);
  }
  return 0;
}

