#include "ghidra_types.h"


// USA 0042046C <- EU 0042044C (Ghidra, non-matching)

uint func_0042046C(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar1 = (byte *)*param_1;
  uVar3 = (uint)*pbVar1;
  if ((*pbVar1 & 0x80) == 0) {
    *param_1 = pbVar1 + 1;
  }
  else {
    if ((uVar3 & 0xe0) == 0xc0) {
      pbVar2 = pbVar1 + 2;
      uVar3 = pbVar1[1] & 0x3f | (uVar3 & 0x1f) << 6;
    }
    else {
      pbVar2 = pbVar1 + 3;
      uVar3 = pbVar1[2] & 0x3f | (uVar3 & 0xf) << 0xc | (pbVar1[1] & 0x3f) << 6;
    }
    *param_1 = pbVar2;
  }
  return uVar3;
}

