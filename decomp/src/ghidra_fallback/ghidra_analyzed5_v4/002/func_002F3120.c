#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0024BCD0(void);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002EEB98(int param_1);
extern int func_003A42B0(int param_1,int param_2);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_002f329c;
extern float DAT_002f32a0;
extern float DAT_002f32a4;
extern float DAT_002f32a8;
extern undefined4 DAT_002f32ac;
extern undefined4 DAT_002f32b0;

// USA 002F3120 <- EU 002F30FC (Ghidra, non-matching)
// GLOBAL DAT_002f329c undefined4
// GLOBAL DAT_002f32a0 float
// GLOBAL DAT_002f32a4 float
// GLOBAL DAT_002f32a8 float
// GLOBAL DAT_002f32ac undefined4
// GLOBAL DAT_002f32b0 undefined4

void func_002F3120(int param_1)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define aiStack_b0 ((int *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x64))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define afStack_40 ((float *)(albw_frame + 0x70))
  #define local_34 (*(float *)(albw_frame + 0x7c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x80))
  #define local_2c (*(undefined4 *)(albw_frame + 0x84))
  #define afStack_28 ((float *)(albw_frame + 0x88))
  func_0024BCD0();
  puVar2 = (uint *)func_002C11E8(aiStack_b0,2,0,0);
  func_0016898C(*(int *)(param_1 + 0xdb4),puVar2);
  uVar5 = DAT_002f329c;
  *(undefined4 *)(param_1 + 0xe1c) = DAT_002f329c;
  func_002EEB98(param_1);
  *(undefined1 *)(param_1 + 0xe0e) = 1;
  local_4c = *(float *)(param_1 + 0xe30);
  uStack_48 = *(undefined4 *)(param_1 + 0xe34);
  uStack_44 = *(undefined4 *)(param_1 + 0xe38);
  func_00115C70(afStack_40,&local_4c,(float *)(param_1 + 0xddc));
  func_00115DC8(afStack_40);
  func_00115C70(afStack_28,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
  iVar3 = func_0068C690(afStack_28);
  *(int *)(param_1 + 1000) = iVar3 + -0x80000000;
  fVar1 = DAT_002f32a0;
  pfVar4 = (float *)(param_1 + 0xe00);
  *pfVar4 = *(float *)(param_1 + 0xddc);
  *(undefined4 *)(param_1 + 0xe04) = *(undefined4 *)(param_1 + 0xde0);
  *(undefined4 *)(param_1 + 0xe08) = *(undefined4 *)(param_1 + 0xde4);
  func_00115DAC(pfVar4,afStack_40,pfVar4,fVar1);
  local_34 = *(float *)(param_1 + 0xddc);
  local_30 = *(undefined4 *)(param_1 + 0xde0);
  local_2c = *(undefined4 *)(param_1 + 0xde4);
  func_00115DAC(&local_34,afStack_40,&local_34,DAT_002f32a4);
  fVar1 = DAT_002f32a8;
  *(float *)(param_1 + 0x3d0) = local_34;
  *(undefined4 *)(param_1 + 0x3d4) = local_30;
  *(undefined4 *)(param_1 + 0x3d8) = local_2c;
  *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)(param_1 + 0x3d8);
  func_0068A560((float *)(param_1 + 0xbf0),(float *)(param_1 + 0xbe4),(float *)(param_1 + 0xe00),
                fVar1);
  *(undefined4 *)(param_1 + 0x3dc) = uVar5;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  func_003A42B0(param_1 + 0x8ec,0);
  uVar5 = DAT_002f32ac;
  *(undefined4 *)(param_1 + 0x1268) = 0x8c;
  *(undefined4 *)(param_1 + 0x126c) = uVar5;
  *(undefined4 *)(param_1 + 0x1264) = 0;
  uVar5 = DAT_002f32b0;
  *(undefined4 *)(param_1 + 0xba0) = 0x14;
  *(undefined4 *)(param_1 + 0xba4) = uVar5;
  *(undefined4 *)(param_1 + 0xb9c) = 0;
  return;
}

