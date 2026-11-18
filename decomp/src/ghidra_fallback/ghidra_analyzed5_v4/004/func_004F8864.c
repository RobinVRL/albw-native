#include "ghidra_types.h"


// USA 004F8864 <- EU 004F883C (Ghidra, non-matching)

undefined4 func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1 + (param_3 & 1) * 0x10;
  *(float *)(iVar1 + 0x748) = fparam_0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x74c) = *param_2;
  *(undefined4 *)(iVar1 + 0x750) = uVar2;
  *(undefined4 *)(iVar1 + 0x754) = uVar3;
  *(byte *)(param_1 + 0x768) = (byte)(1 << (param_3 & 0xff)) | *(byte *)(param_1 + 0x768);
  return (undefined4)param_1;
}

