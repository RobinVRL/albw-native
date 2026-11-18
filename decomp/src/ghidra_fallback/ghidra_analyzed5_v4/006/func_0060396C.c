#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001A6788(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060396c;

// USA 0060396C <- EU 00603944 (Ghidra, non-matching)
// GLOBAL DAT_0060396c undefined4

undefined4 func_0060396C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060396c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001A6788(puVar1,param_1);
  }
  return 0;
}

