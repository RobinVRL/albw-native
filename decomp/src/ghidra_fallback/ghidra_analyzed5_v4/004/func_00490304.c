#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined4 DAT_004903d0;
extern undefined4 DAT_004903d4;

// USA 00490304 <- EU 004902DC (Ghidra, non-matching)
// GLOBAL DAT_004903d0 undefined4
// GLOBAL DAT_004903d4 undefined4

undefined4 *
func_00490304(undefined4 *param_1,byte *param_2,undefined4 *param_3,float fparam_0,float fparam_1,
             float fparam_2,float fparam_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = fparam_0 + fparam_2;
  fVar3 = fparam_1 + fparam_3;
  *param_1 = DAT_004903d0;
  uVar1 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  if (fparam_0 < fVar2) {
    param_1[3] = ALBW_AS_U32(fparam_0);
    param_1[5] = ALBW_AS_U32(fVar2);
  }
  else {
    param_1[3] = ALBW_AS_U32(fVar2);
    param_1[5] = ALBW_AS_U32(fparam_0);
  }
  if (fparam_1 < fVar3) {
    param_1[4] = ALBW_AS_U32(fparam_1);
    param_1[6] = ALBW_AS_U32(fVar3);
  }
  else {
    param_1[4] = ALBW_AS_U32(fVar3);
    param_1[6] = ALBW_AS_U32(fparam_1);
  }
  *param_1 = DAT_004903d4;
  func_00110D44(param_1 + 7,param_2,0x48);
  param_1[7] = *(undefined4 *)param_2;
  *(byte *)(param_1 + 8) = param_2[4];
  *(byte *)((int)param_1 + 0x21) = param_2[5];
  param_1[9] = *(undefined4 *)(param_2 + 8);
  param_1[10] = *(undefined4 *)(param_2 + 0xc);
  func_0010E3C4(param_1 + 0xb,(uint *)(param_2 + 0x10),0x10);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x24);
  *(byte *)(param_1 + 0x11) = param_2[0x28];
  param_1[0x12] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x14] = *(undefined4 *)(param_2 + 0x34);
  *(byte *)(param_1 + 0x15) = param_2[0x38];
  param_1[0x17] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x44);
  return param_1;
}

