#include "ghidra_types.h"


// USA 00547B6C <- EU 00547B44 (Ghidra, non-matching)

bool func_00547B6C(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  if (*param_1 < param_1[1]) {
    uVar1 = uVar1 + *param_1 * 0xc;
  }
  return (*(uint *)(uVar1 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0;
}

