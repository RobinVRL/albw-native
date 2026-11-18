#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_004BD784(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int DAT_004dcd64;
extern float DAT_004dcd68;
extern float DAT_004dcd6c;

// USA 004DCCE0 <- EU 004DCCB8 (Ghidra, non-matching)
// GLOBAL DAT_004dcd64 int
// GLOBAL DAT_004dcd68 float
// GLOBAL DAT_004dcd6c float

undefined4 func_004DCCE0(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint extraout_r1;
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
  if ((int)*(char *)(DAT_004dcd64 + param_1) - 6U < 3) {
    func_004BD784(param_1,extraout_r1,DAT_004dcd6c,DAT_004dcd68);
  }
  return func_004BC8D8(param_1);
}

