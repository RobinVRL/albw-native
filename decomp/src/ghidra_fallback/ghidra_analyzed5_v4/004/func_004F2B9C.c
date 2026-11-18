#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_004f2cfc;
extern int DAT_004f2d00;
extern int *DAT_004f2d04;
extern float DAT_004f2d08;
extern float DAT_004f2d0c;
extern uint DAT_004f2d10;
extern float DAT_004f2d14;
extern int *DAT_004f2d18;
extern int DAT_004f2d1c;
extern undefined4 *DAT_004f2d20;
extern float DAT_004f2d24;

// USA 004F2B9C <- EU 004F2B74 (Ghidra, non-matching)
// GLOBAL DAT_004f2cfc float
// GLOBAL DAT_004f2d00 int
// GLOBAL DAT_004f2d04 int *
// GLOBAL DAT_004f2d08 float
// GLOBAL DAT_004f2d0c float
// GLOBAL DAT_004f2d10 uint
// GLOBAL DAT_004f2d14 float
// GLOBAL DAT_004f2d18 int *
// GLOBAL DAT_004f2d1c int
// GLOBAL DAT_004f2d20 undefined4 *
// GLOBAL DAT_004f2d24 float

undefined4 func_004F2B9C(int *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define local_7c (*(int * *)(albw_frame + 0x4))
  #define local_78 (*(undefined4 *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(uint *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(float * *)(albw_frame + 0x1c))
  #define local_60 (*(float * *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(undefined1 *)(albw_frame + 0x28))
  #define local_57 (*(undefined1 *)(albw_frame + 0x29))
  #define local_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_30 (*(float *)(albw_frame + 0x50))
  #define local_2c (*(float *)(albw_frame + 0x54))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x58))
  #define local_24 (*(float *)(albw_frame + 0x5c))
  #define piStack_20 (*(int * *)(albw_frame + 0x60))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x64))
  iVar1 = DAT_004f2d00;
  fVar7 = DAT_004f2cfc;
  param_1[0xf7] = (int)ALBW_AS_U32(DAT_004f2cfc);
  param_1[0xf8] = (int)ALBW_AS_U32(fVar7);
  param_1[0xf9] = (int)ALBW_AS_U32(fVar7);
  param_1[0x245] = iVar1;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_80,pfVar2,(float *)(param_1 + 0xf4));
  local_24 = local_80;
  piStack_20 = local_7c;
  uStack_1c = local_78;
  uVar3 = func_0068C690(&local_24);
  uVar4 = (uint)*(char *)(*DAT_004f2d04 + 0x18);
  bVar6 = 4 < uVar4;
  bVar5 = uVar4 == 5;
  if (5 < uVar4) {
    bVar6 = 3 < uVar4 - 0x16;
    bVar5 = uVar4 - 0x16 == 4;
  }
  fparam_0 = DAT_004f2d08;
  if (!bVar6 || bVar5) {
    func_004D80A4(&local_50,uVar3,DAT_004f2d0c);
    local_4c = fVar7;
    uVar4 = func_00115C54(&local_50,&local_50,(float *)(param_1 + 0xf4));
    local_70 = DAT_004f2d10 | uVar4 & 0xffff0000;
    local_80 = 0.0;
    local_78 = 0;
    local_74 = 0;
    local_6c = 0xff;
    uStack_68 = 0;
    local_60 = &local_50;
    local_58 = 0;
    local_7c = param_1 + 0x254;
    local_57 = 1;
    local_30 = local_50;
    uStack_28 = uStack_48;
    local_64 = &local_30;
    local_2c = local_4c - DAT_004f2d14;
    local_5c = fVar7;
    func_004A8030(*DAT_004f2d18,(int *)&local_80,3);
    if (*(char *)((int)param_1 + 0x91a) != '\0') goto LAB_004f2cbc;
  }
  func_004D80A4((float *)(param_1 + 0xf7),uVar3,fparam_0);
  param_1[0xf8] = (int)ALBW_AS_U32(fVar7);
LAB_004f2cbc:
  param_1[0x241] = DAT_004f2d1c;
  param_1[0x244] = param_1[0xf5];
  param_1[0x242] = param_1[0xf5];
  func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
  func_004F8864((int)param_1,DAT_004f2d20,0,DAT_004f2d24);
  return (undefined4)param_1;
}

