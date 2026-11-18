#include "ghidra_types.h"

extern float func_0041E694(int param_1,float fparam_0,float fparam_1);
extern int func_0041E7BC(undefined4 param_1);
extern float func_00568B68(int param_1);
extern float func_00569264(int param_1,float *param_2,int param_3);
extern int func_006806AC(int param_1);
extern int func_00691454(byte *param_1,float *param_2,uint param_3,int param_4);
extern float DAT_00569470;
extern undefined4 DAT_00569474;

// USA 00569310 <- EU 005692E8 (Ghidra, non-matching)
// GLOBAL DAT_00569470 float
// GLOBAL DAT_00569474 undefined4

undefined4 func_00569310(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define abStack_90 ((byte *)(albw_frame + 0x0))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_4c (*(int *)(albw_frame + 0x44))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define local_30 (*(float *)(albw_frame + 0x60))
  #define local_2c (*(float *)(albw_frame + 0x64))
  #define local_28 (*(float *)(albw_frame + 0x68))
  #define local_24 (*(float *)(albw_frame + 0x6c))
  fVar5 = DAT_00569470;
  if (*(int *)(param_2 + 0xb4) == 0) {
    *param_1 = DAT_00569470;
    param_1[1] = fVar5;
    param_1[2] = fVar5;
    param_1[3] = fVar5;
    return 0;
  }
  func_006806AC((int)abStack_90);
  local_6c = *(undefined4 *)(param_2 + 0xb4);
  local_80 = fVar5;
  local_7c = fVar5;
  if (*(int *)(param_2 + 0xb4) != 0) {
    func_0041E694((int)abStack_90,*(float *)(param_2 + 0xb8),*(float *)(param_2 + 0xbc));
    local_58 = *(undefined4 *)(param_2 + 0xc0);
    local_5c = *(undefined4 *)(param_2 + 0xc4);
    if ((*(byte *)(param_2 + 0xf4) & 0x40) == 0) {
      local_60 = DAT_00569474;
    }
    else {
      local_60 = *(undefined4 *)(param_2 + 0x3c);
    }
  }
  if (*(int *)(param_2 + 200) != 0) {
    local_4c = *(int *)(param_2 + 200);
  }
  local_30 = fVar5;
  local_2c = fVar5;
  local_28 = fVar5;
  local_24 = fVar5;
  func_00691454(abStack_90,&local_30,*(uint *)(param_2 + 0xa4),(uint)*(ushort *)(param_2 + 0xce));
  local_38 = local_28 - local_30;
  fVar4 = local_24 - local_2c;
  local_34 = fVar4;
  fVar1 = func_00568B68(param_2);
  fVar6 = fVar4;
  fVar2 = func_00569264(param_2,param_2 + 0x3c,0);
  fVar5 = fVar4;
  fVar3 = func_00569264(param_2,&local_38,1);
  local_2c = fVar6 - (fVar5 - fVar4);
  local_30 = (fVar2 - fVar3) + fVar1;
  local_28 = local_30 + local_38;
  local_24 = local_2c - local_34;
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  return func_0041E7BC(abStack_90);
}

