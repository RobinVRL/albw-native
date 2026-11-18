#include "ghidra_types.h"


// USA 00149CA4 <- EU 00149CA4 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x00149cd0) */

byte * func_00149CA4(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = param_1[2];
  param_1[2] = bVar1 + 1;
  if ((byte)(bVar1 + 1) == 4) {
    uVar2 = param_1[1] + 4;
    if (0x50 < uVar2) {
      uVar2 = 0x50;
    }
    uVar4 = uVar2 & 0xff;
    param_1[1] = (byte)uVar2;
    if (param_2 != 0) {
      iVar3 = uVar4 - *param_1;
      if (iVar3 != 0) {
        uVar2 = iVar3 + (uint)*param_1;
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
        else if ((int)uVar4 < (int)uVar2) {
          uVar2 = uVar4;
        }
        *param_1 = (byte)uVar2;
      }
    }
    param_1[2] = 0;
  }
  return param_1;
}

