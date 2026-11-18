#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052E454(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0053ECB4(int param_1);
extern float DAT_002d626c;
extern float DAT_002d6270;
extern float DAT_002d6274;
extern undefined4 DAT_002d6278;
extern uint DAT_002d627c;
extern undefined4 *DAT_002d6280;
extern float DAT_002d6284;
extern float DAT_002d6288;
extern int *DAT_002d628c;
extern float DAT_002d6290;
extern int DAT_002d6294;

// USA 002D6048 <- EU 002D6024 (Ghidra, non-matching)
// GLOBAL DAT_002d626c float
// GLOBAL DAT_002d6270 float
// GLOBAL DAT_002d6274 float
// GLOBAL DAT_002d6278 undefined4
// GLOBAL DAT_002d627c uint
// GLOBAL DAT_002d6280 undefined4 *
// GLOBAL DAT_002d6284 float
// GLOBAL DAT_002d6288 float
// GLOBAL DAT_002d628c int *
// GLOBAL DAT_002d6290 float
// GLOBAL DAT_002d6294 int

undefined4 func_002D6048(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  uint unaff_r5;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(float * *)(albw_frame + 0x8))
  #define local_c4 (*(int *)(albw_frame + 0xc))
  #define local_bc (*(undefined4 *)(albw_frame + 0x14))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_ac (*(undefined4 * *)(albw_frame + 0x24))
  #define local_a8 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_9c (*(undefined4 *)(albw_frame + 0x34))
  #define local_98 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x40))
  #define local_8c (*(float *)(albw_frame + 0x44))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(float *)(albw_frame + 0x4c))
  #define local_80 ((byte *)(albw_frame + 0x50))
  #define uStack_70 (*(uint *)(albw_frame + 0x60))
  #define local_6c (*(undefined4 *)(albw_frame + 0x64))
  #define local_68 (*(undefined4 *)(albw_frame + 0x68))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(undefined1 *)(albw_frame + 0x78))
  #define local_57 (*(undefined1 *)(albw_frame + 0x79))
  #define local_54 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_50 (*(float *)(albw_frame + 0x80))
  #define local_4c (*(undefined4 *)(albw_frame + 0x84))
  #define local_48 (*(float *)(albw_frame + 0x88))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define fStack_40 (*(float *)(albw_frame + 0x90))
  #define local_34 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_30 (*(float *)(albw_frame + 0xa0))
  #define local_2c (*(undefined4 *)(albw_frame + 0xa4))
  #define fStack_28 (*(float *)(albw_frame + 0xa8))
  #define local_24 (*(float *)(albw_frame + 0xac))
  local_8c = DAT_002d626c;
  local_88 = DAT_002d626c;
  local_84 = DAT_002d626c;
  fVar5 = DAT_002d626c;
  iVar1 = func_0053ECB4(*(int *)(*(int *)(param_1 + 0x28) + 0x600));
  local_54 = *(undefined4 *)(iVar1 + 0xc);
  local_50 = *(float *)(iVar1 + 0x1c) + DAT_002d6270;
  local_4c = *(undefined4 *)(iVar1 + 0x2c);
  uStack_70 = unaff_r5 & 0xffff0000 | DAT_002d627c;
  local_30 = local_50 - DAT_002d6274;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_6c = 0xff;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_57 = 1;
  uVar6 = DAT_002d6278;
  fVar7 = DAT_002d6274;
  local_5c = fVar5;
  local_34 = local_54;
  local_2c = local_4c;
  func_00110D44(&local_c8,local_80,0x2a);
  local_98 = *DAT_002d6280;
  uStack_94 = DAT_002d6280[1];
  uStack_90 = DAT_002d6280[2];
  local_a8 = &local_34;
  local_ac = &local_54;
  local_c4 = param_1 + 0x15c;
  local_c8 = &local_8c;
  local_bc = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2cc);
  local_b4 = 0x18;
  local_9c = uVar6;
  iVar1 = func_004A7620(*DAT_002d628c,(uint *)&local_c8,0xff,DAT_002d6288,DAT_002d6284);
  if (iVar1 != 0) {
    local_88 = *(float *)(param_1 + 0x80) + local_88;
    *(float *)(param_1 + 0x80) = local_88;
    if (*(float *)(param_1 + 0x7c) <= fVar5) {
      fVar5 = *(float *)(param_1 + 0x7c);
    }
    *(float *)(param_1 + 0x7c) = fVar5;
    *(float *)(*(int *)(param_1 + 0x28) + 0x724) = local_88 - *(float *)(param_1 + 0x78);
    return 1;
  }
  pfVar3 = *(float **)(param_1 + 0x30);
  local_48 = *pfVar3;
  local_44 = pfVar3[1];
  fStack_40 = pfVar3[2];
  func_004D80A4(&fStack_28,**(int **)(param_1 + 0x3c) + 0x80000000,DAT_002d6290);
  local_24 = fVar5;
  func_00115C54(&local_48,&local_48,&fStack_28);
  fVar4 = *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x78);
  local_44 = local_44 + fVar4;
  if ((DAT_002d6294 < (int)ALBW_AS_U32(fVar4)) &&
     (uVar2 = func_0052E454(*(int *)(param_1 + 0x28),&local_48,1,fVar4 - fVar7), uVar2 == 0)) {
    if (fVar5 < *(float *)(param_1 + 0x7c)) {
      *(float *)(param_1 + 0x7c) = fVar5;
      **(float **)(param_1 + 0x34) = fVar5;
      *(float *)(*(int *)(param_1 + 0x34) + 8) = fVar5;
    }
  }
  return 0;
}

