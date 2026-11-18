#include "ghidra_types.h"


// USA 00420434 <- EU 00420414 (Ghidra, non-matching)

uint func_00420434(undefined4 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  uVar1 = (uint)*pbVar2;
  if ((uVar1 - 0x81 < 0x1f) || (0xdf < uVar1)) {
    pbVar3 = pbVar2 + 2;
    uVar1 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
  }
  else {
    pbVar3 = pbVar2 + 1;
  }
  *param_1 = pbVar3;
  return uVar1;
}

