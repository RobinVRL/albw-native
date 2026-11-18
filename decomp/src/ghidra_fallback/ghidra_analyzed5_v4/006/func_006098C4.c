#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003899B8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006098c4;

// USA 006098C4 <- EU 0060989C (Ghidra, non-matching)
// GLOBAL DAT_006098c4 undefined4

undefined4 func_006098C4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006098c4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003899B8(puVar1,param_1);
  }
  return 0;
}

