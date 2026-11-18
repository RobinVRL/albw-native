#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_004e2f1c;
extern undefined4 DAT_004e2f20;
extern undefined4 DAT_004e2f24;
extern undefined4 DAT_004e2f28;
extern float DAT_004e2f2c;
extern float DAT_004e2f30;
extern int *DAT_004e2f34;
extern int DAT_004e2f38;

// USA 004E2D30 <- EU 004E2D08 (Ghidra, non-matching)
// GLOBAL DAT_004e2f1c float
// GLOBAL DAT_004e2f20 undefined4
// GLOBAL DAT_004e2f24 undefined4
// GLOBAL DAT_004e2f28 undefined4
// GLOBAL DAT_004e2f2c float
// GLOBAL DAT_004e2f30 float
// GLOBAL DAT_004e2f34 int *
// GLOBAL DAT_004e2f38 int

void func_004E2D30(int param_1)

{
  uint uVar1;
  uint unaff_r5;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fparam_0;
  float fVar6;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(uint *)(albw_frame + 0x8))
  #define local_a4 (*(int *)(albw_frame + 0xc))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined2 *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(uint *)(albw_frame + 0x24))
  #define iStack_88 (*(int *)(albw_frame + 0x28))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c ((byte *)(albw_frame + 0x44))
  #define local_5c (*(uint *)(albw_frame + 0x54))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_48 (*(undefined4 *)(albw_frame + 0x68))
  #define local_44 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define local_3c (*(undefined4 *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  func_004D80A4(&local_40,*(uint *)(param_1 + 1000),DAT_004e2f1c);
  fVar5 = -local_40;
  fVar6 = -local_38;
  local_3c = DAT_004e2f24;
  local_5c = unaff_r5 & 0xffff0000 | 0xffff;
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_6c[3] = 0;
  local_6c[4] = 0;
  local_6c[5] = 0;
  local_6c[6] = 0;
  local_6c[7] = 0;
  local_6c[8] = 0;
  local_6c[9] = 0;
  local_6c[10] = 0;
  local_6c[0xb] = 0;
  local_6c[0xc] = 0;
  local_6c[0xd] = 0;
  local_6c[0xe] = 0;
  local_6c[0xf] = 0;
  local_58 = 0xff;
  uStack_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = DAT_004e2f20;
  local_44 = 0;
  local_43 = 1;
  uVar3 = DAT_004e2f20;
  uVar4 = DAT_004e2f24;
  local_40 = fVar5;
  local_38 = fVar6;
  func_00110D44(&local_a8,local_6c,0x2a);
  uVar2 = param_1 + 0x3d0;
  local_9c = *(undefined4 *)(param_1 + 0x2cc);
  local_94 = 0xddf;
  local_98 = *(undefined2 *)(param_1 + 0x54);
  local_90 = *(undefined4 *)(param_1 + 0x3a0);
  fparam_0 = DAT_004e2f30;
  fparam_1 = DAT_004e2f2c;
  local_a8 = uVar2;
  local_a4 = param_1 + 0x410;
  local_8c = uVar2;
  iStack_88 = param_1 + 0x368;
  local_7c = uVar4;
  local_78 = fVar5;
  local_74 = uVar4;
  local_70 = fVar6;
  func_004A7620(*DAT_004e2f34,&local_a8,0xff,DAT_004e2f30,DAT_004e2f2c);
  uVar1 = (uint)*(char *)(DAT_004e2f38 + param_1);
  if (((uVar1 != 2 && uVar1 != 3) && (uVar1 != 4 && uVar1 != 5)) && (uVar1 != 6)) {
    local_5c = uVar1 & 0xffff0000 | 0xffff;
    local_6c[0] = 0;
    local_6c[1] = 0;
    local_6c[2] = 0;
    local_6c[3] = 0;
    local_6c[4] = 0;
    local_6c[5] = 0;
    local_6c[6] = 0;
    local_6c[7] = 0;
    local_6c[8] = 0;
    local_6c[9] = 0;
    local_6c[10] = 0;
    local_6c[0xb] = 0;
    local_6c[0xc] = 0;
    local_6c[0xd] = 0;
    local_6c[0xe] = 0;
    local_6c[0xf] = 0;
    local_58 = 0xff;
    uStack_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_43 = 1;
    local_48 = uVar3;
    func_00110D44(&local_a8,local_6c,0x2a);
    local_9c = *(undefined4 *)(param_1 + 0x2cc);
    local_94 = 0xddf;
    local_98 = *(undefined2 *)(param_1 + 0x54);
    local_90 = *(undefined4 *)(param_1 + 0x3a0);
    local_a8 = uVar2;
    local_a4 = param_1 + 0x410;
    local_8c = uVar2;
    iStack_88 = param_1 + 0x368;
    local_7c = uVar4;
    local_78 = ALBW_AS_F32(uVar3);
    local_74 = uVar4;
    local_70 = ALBW_AS_F32(uVar3);
    func_004A7620(*DAT_004e2f34,&local_a8,0xff,fparam_0,fparam_1);
  }
  return;
}

