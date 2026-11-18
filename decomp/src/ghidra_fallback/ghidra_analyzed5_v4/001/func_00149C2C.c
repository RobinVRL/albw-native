#include "ghidra_types.h"


// USA 00149C2C <- EU 00149C2C (Ghidra, non-matching)

byte * func_00149C2C(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  
  *param_1 = *param_2;
  bVar2 = param_2[1];
  param_1[1] = bVar2;
  bVar3 = (bVar2 & 3) != 0;
  if (bVar3) {
    bVar2 = bVar2 & 0xfc;
  }
  param_1[2] = param_2[2];
  pbVar1 = param_1 + 1;
  if (bVar3) {
    *pbVar1 = bVar2;
  }
  if (*pbVar1 < 0x51) {
    if (*pbVar1 < 0xc) {
      *pbVar1 = 0xc;
    }
  }
  else {
    *pbVar1 = 0x50;
  }
  if (*pbVar1 < *param_1) {
    *param_1 = *pbVar1;
  }
  if (*param_1 < 0xc) {
    *param_1 = 0xc;
  }
  if (3 < param_1[2]) {
    param_1[2] = 0;
  }
  return param_1;
}

