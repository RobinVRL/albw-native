#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);
extern undefined4 DAT_001110b4;
extern int DAT_001110b8;

// USA 00111074 <- EU 00111074 (Ghidra, non-matching)
// GLOBAL DAT_001110b4 undefined4
// GLOBAL DAT_001110b8 int

int func_00111074(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  if (((param_2 != (uint *)0x0) && ((char)*param_2 != '\0')) &&
     (uVar1 = func_0010FBAC((uint *)(DAT_001110b4 + 0x111098),param_2), uVar1 != 0)) {
    return 0;
  }
  return (int)&DAT_001110b4 + DAT_001110b8;
}

