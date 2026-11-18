#include "ghidra_types.h"


// USA 00149B68 <- EU 00149B68 (Ghidra, non-matching)

byte * func_00149B68(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (0 < param_2) {
    uVar1 = param_2 + (uint)param_1[1];
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x50 < (int)uVar1) {
      uVar1 = 0x50;
    }
    uVar3 = uVar1 & 0xff;
    param_1[1] = (byte)uVar1;
    if (param_4 != 0) {
      iVar2 = uVar3 - *param_1;
      if (iVar2 != 0) {
        uVar1 = iVar2 + (uint)*param_1;
        if ((int)uVar1 < 0) {
          uVar1 = 0;
        }
        else if ((int)uVar3 < (int)uVar1) {
          uVar1 = uVar3;
        }
        *param_1 = (byte)uVar1;
      }
    }
  }
  return param_1;
}

