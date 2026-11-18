#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);

// USA 0037252C <- EU 00372508 (Ghidra, non-matching)

undefined4 func_0037252C(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  if (*(int *)(param_1 + 0x970) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fparam_0);
  }
  func_004BCAA8(param_1);
  return func_004BC8D8(param_1);
}

