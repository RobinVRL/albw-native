#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern uint DAT_0020cd40;

// USA 0020CC0C <- EU 0020CC0C (Ghidra, non-matching)
// GLOBAL DAT_0020cd40 uint

undefined4 func_0020CC0C(int param_1)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define fStack_24 (*(float *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(float *)(albw_frame + 0x48))
  uVar2 = DAT_0020cd40;
  pfVar4 = &local_58;
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&local_20,(float *)(param_1 + 0x3d0),pfVar3);
  local_38 = local_20;
  uStack_34 = local_1c;
  fStack_30 = local_18;
  local_2c = local_20;
  uStack_28 = local_1c;
  fStack_24 = local_18;
  func_004D7F70(&local_38,uVar2);
  func_004D7F70(&local_2c,-uVar2);
  func_00115C54(&local_20,pfVar3,&local_38);
  local_4c = local_20;
  uStack_48 = local_1c;
  local_44 = local_18;
  func_00115C54(&local_20,pfVar3,&local_2c);
  local_58 = local_20;
  local_54 = local_1c;
  local_50 = local_18;
  fVar5 = local_4c - *(float *)(param_1 + 0x3d0);
  fVar6 = local_44 - *(float *)(param_1 + 0x3d8);
  local_18 = local_18 - *(float *)(param_1 + 0x3d8);
  local_20 = local_20 - *(float *)(param_1 + 0x3d0);
  bVar1 = SQRT(local_20 * local_20 + local_18 * local_18) < SQRT(fVar5 * fVar5 + fVar6 * fVar6);
  if (bVar1) {
    pfVar4 = &local_4c;
  }
  *(bool *)(param_1 + 0xc78) = bVar1;
  *(float *)(param_1 + 0xc7c) = *pfVar4;
  *(float *)(param_1 + 0xc80) = pfVar4[1];
  *(float *)(param_1 + 0xc84) = pfVar4[2];
  return func_004FABDC(param_1,0xd,6,0);
}

