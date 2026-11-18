#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);
extern undefined4 DAT_00110d3c;
extern int DAT_00110d40;

// USA 00110CFC <- EU 00110CFC (Ghidra, non-matching)
// GLOBAL DAT_00110d3c undefined4
// GLOBAL DAT_00110d40 int

int func_00110CFC(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  if (((param_2 != (uint *)0x0) && ((char)*param_2 != '\0')) &&
     (uVar1 = func_0010FBAC((uint *)(DAT_00110d3c + 0x110d20),param_2), uVar1 != 0)) {
    return 0;
  }
  return (int)&DAT_00110d3c + DAT_00110d40;
}

