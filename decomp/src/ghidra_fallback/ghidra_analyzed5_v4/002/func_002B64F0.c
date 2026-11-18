#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014F0B0(int param_1);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_002b6628;
extern uint DAT_002b662c;
extern undefined4 *DAT_002b6630;
extern float DAT_002b6634;
extern undefined4 DAT_002b6638;
extern float DAT_002b663c;
extern float DAT_002b6640;
extern int *DAT_002b6644;

// USA 002B64F0 <- EU 002B64CC (Ghidra, non-matching)
// GLOBAL DAT_002b6628 undefined4
// GLOBAL DAT_002b662c uint
// GLOBAL DAT_002b6630 undefined4 *
// GLOBAL DAT_002b6634 float
// GLOBAL DAT_002b6638 undefined4
// GLOBAL DAT_002b663c float
// GLOBAL DAT_002b6640 float
// GLOBAL DAT_002b6644 int *

int func_002B64F0(int param_1,uint param_2,float fparam_0,float fparam_1)

{
  int iVar1;
  uint unaff_r5;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define uStack_b8 (*(uint *)(albw_frame + 0x8))
  #define local_b4 (*(int *)(albw_frame + 0xc))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(undefined2 *)(albw_frame + 0x18))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_9c (*(float * *)(albw_frame + 0x24))
  #define local_98 (*(float * *)(albw_frame + 0x28))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define fStack_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x40))
  #define local_7c ((byte *)(albw_frame + 0x44))
  #define uStack_6c (*(uint *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(undefined4 *)(albw_frame + 0x68))
  #define local_54 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_53 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define local_48 (*(undefined4 *)(albw_frame + 0x78))
  #define fStack_3c (*(float *)(albw_frame + 0x84))
  #define local_38 (*(undefined4 *)(albw_frame + 0x88))
  #define local_30 (*(float *)(albw_frame + 0x90))
  #define fStack_2c (*(float *)(albw_frame + 0x94))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x98))
  #define local_24 (*(float *)(albw_frame + 0x9c))
  #define local_20 (*(float *)(albw_frame + 0xa0))
  #define local_1c (*(undefined4 *)(albw_frame + 0xa4))
  func_004D80A4(&fStack_3c,param_2,fparam_0);
  local_38 = DAT_002b6628;
  uStack_6c = unaff_r5 & 0xffff0000 | DAT_002b662c;
  local_7c[0] = 0;
  local_7c[1] = 0;
  local_7c[2] = 0;
  local_7c[3] = 0;
  local_68 = 0xff;
  local_7c[4] = 0;
  local_7c[5] = 0;
  local_7c[6] = 0;
  local_7c[7] = 0;
  local_7c[8] = 0;
  local_7c[9] = 0;
  local_7c[10] = 0;
  local_7c[0xb] = 0;
  local_7c[0xc] = 0;
  local_7c[0xd] = 0;
  local_7c[0xe] = 0;
  local_7c[0xf] = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = DAT_002b6628;
  local_54 = 0;
  local_53 = 1;
  uVar2 = DAT_002b6628;
  func_00110D44(&uStack_b8,local_7c,0x2a);
  local_88 = *DAT_002b6630;
  fStack_84 = ALBW_AS_F32(DAT_002b6630[1]);
  local_80 = DAT_002b6630[2];
  local_8c = ALBW_AS_F32(uVar2);
  func_00115C54(&local_24,(float *)(param_1 + 0x368),&fStack_3c);
  local_30 = local_24;
  fStack_2c = local_20;
  uStack_28 = local_1c;
  func_00115C54(&local_24,(float *)(param_1 + 0x3d0),&fStack_3c);
  local_4c = local_20 - DAT_002b6634;
  local_50 = local_24;
  local_48 = local_1c;
  local_98 = &local_30;
  local_b4 = param_1 + 0xa48;
  local_9c = &local_50;
  local_ac = *(undefined4 *)(param_1 + 0x2cc);
  local_a4 = DAT_002b6638;
  local_a8 = *(undefined2 *)(param_1 + 0x54);
  local_8c = fparam_1;
  local_88 = uVar2;
  fStack_84 = fparam_1;
  local_80 = uVar2;
  func_0014F0B0(param_1);
  iVar1 = func_004A9F98(*DAT_002b6644,&uStack_b8,0xff,DAT_002b6640,DAT_002b663c);
  return iVar1;
}

