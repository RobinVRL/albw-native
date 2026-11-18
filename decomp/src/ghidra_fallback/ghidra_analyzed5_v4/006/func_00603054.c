#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001551C4(undefined4 *param_1,uint *param_2);

// USA 00603054 <- EU 0060302C (Ghidra, non-matching)

undefined4 func_00603054(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x930);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001551C4(puVar1,param_1);
  }
  return 0;
}

