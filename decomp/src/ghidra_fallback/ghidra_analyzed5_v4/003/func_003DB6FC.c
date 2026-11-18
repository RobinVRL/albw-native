#include "ghidra_types.h"


// USA 003DB6FC <- EU 003DB6DC (Ghidra, non-matching)

undefined4 func_003DB6FC(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((((char)param_1[3] == '\0') && (param_2 != 0)) && (param_3 != 0)) {
    if (((*param_1 == 0) && (0x13ffffff < param_2)) && (param_2 + param_3 < 0x1c000000)) {
      param_1[2] = param_3;
      *param_1 = param_2;
      param_1[1] = param_2 + 0xc000000;
      uVar1 = 1;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}

