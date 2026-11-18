#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_004212DC(float *param_1,float *param_2,uint param_3);
extern int func_00421398(float *param_1,float *param_2,float *param_3,float *param_4);
extern float DAT_003fb4dc;

// USA 003FB1D0 <- EU 003FB1B0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_003fb4dc float

void func_003FB1D0(float *param_1,int param_2,int param_3,float *param_4,float *param_5,
                  float fparam_0,float fparam_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float *)(albw_frame + 0x0))
  #define local_ac (*(float *)(albw_frame + 0x4))
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define local_34 (*(float *)(albw_frame + 0x7c))
  #define local_30 (*(float *)(albw_frame + 0x80))
  #define local_2c (*(float *)(albw_frame + 0x84))
  #define local_28 (*(float *)(albw_frame + 0x88))
  #define fStack_24 (*(float *)(albw_frame + 0x8c))
  local_b0 = ((*(float *)(param_3 + 0x18) - DAT_003fb4dc) * fparam_0) / *(float *)(param_3 + 0x10);
  local_a4 = ((*(float *)(param_2 + 0x18) + DAT_003fb4dc) * fparam_0) / *(float *)(param_2 + 0x10);
  local_ac = ((*(float *)(param_3 + 8) + DAT_003fb4dc) * fparam_0) / *(float *)(param_3 + 4);
  local_94 = ((*(float *)(param_3 + 8) - DAT_003fb4dc) * fparam_0) / *(float *)(param_3 + 4);
  local_a8 = -fparam_0;
  local_64 = (DAT_003fb4dc / fparam_0) * fparam_1;
  local_80 = (((*(float *)(param_2 + 0x18) - DAT_003fb4dc) * fparam_0) / *(float *)(param_2 + 0x10))
             * local_64;
  local_74 = (((*(float *)(param_3 + 0x18) + DAT_003fb4dc) * fparam_0) / *(float *)(param_3 + 0x10))
             * local_64;
  local_7c = local_ac * local_64;
  local_78 = -fparam_1;
  local_64 = local_94 * local_64;
  fVar10 = DAT_003fb4dc;
  local_a0 = local_ac;
  local_9c = local_a8;
  local_98 = local_a4;
  local_90 = local_a8;
  local_8c = local_b0;
  local_88 = local_94;
  local_84 = local_a8;
  local_70 = local_7c;
  local_6c = local_78;
  local_68 = local_74;
  local_60 = local_78;
  local_5c = local_80;
  local_58 = local_64;
  local_54 = local_78;
  func_00115074(&local_b0,param_5,&local_b0);
  func_00115074(&local_a4,param_4,&local_a4);
  func_00115074(&local_98,param_4,&local_98);
  func_00115074(&local_8c,param_5,&local_8c);
  func_00115074(&local_80,param_4,&local_80);
  func_00115074(&local_74,param_5,&local_74);
  func_00115074(&local_68,param_5,&local_68);
  func_00115074(&local_5c,param_4,&local_5c);
  func_004212DC(param_1,&local_b0,8);
  fVar7 = local_80 - local_b0;
  fVar3 = local_7c - local_ac;
  fVar5 = local_78 - local_a8;
  fVar8 = fVar10 / SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5);
  fVar9 = local_68 - local_98;
  fVar4 = local_64 - local_94;
  fVar6 = local_60 - local_90;
  local_38 = local_b0 + fVar7 * fVar8;
  local_34 = local_ac + fVar3 * fVar8;
  local_30 = local_a8 + fVar5 * fVar8;
  fVar3 = fVar10 / SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar6 * fVar6);
  local_2c = local_98 + fVar9 * fVar3;
  fStack_24 = local_90 + fVar6 * fVar3;
  local_28 = local_94 + fVar4 * fVar3;
  func_00421398(param_1 + 6,&local_38,&local_8c,&local_b0);
  func_00421398(param_1 + 10,&local_2c,&local_a4,&local_98);
  func_00421398(param_1 + 0xe,&local_2c,&local_98,&local_8c);
  func_00421398(param_1 + 0x12,&local_38,&local_b0,&local_a4);
  func_00421398(param_1 + 0x16,&local_68,&local_5c,&local_80);
  func_00421398(param_1 + 0x1a,&local_98,&local_a4,&local_b0);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    fVar4 = param_1[iVar1 * 4 + 6];
    fVar3 = fVar10 / SQRT(fVar4 * fVar4 + param_1[iVar1 * 4 + 7] * param_1[iVar1 * 4 + 7] +
                          param_1[iVar1 * 4 + 8] * param_1[iVar1 * 4 + 8]);
    param_1[iVar1 * 4 + 6] = fVar4 * fVar3;
    param_1[iVar1 * 4 + 7] = param_1[iVar1 * 4 + 7] * fVar3;
    param_1[iVar1 * 4 + 8] = param_1[iVar1 * 4 + 8] * fVar3;
    param_1[iVar1 * 4 + 9] = param_1[iVar1 * 4 + 9] * fVar3;
    iVar1 = iVar2;
  } while (iVar2 < 6);
  return;
}

