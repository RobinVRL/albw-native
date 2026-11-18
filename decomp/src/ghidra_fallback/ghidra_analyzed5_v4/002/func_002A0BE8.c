// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00556E64(int param_1);
extern int iRam002a0dcc;
extern undefined4 uRam002a0dc4;
extern undefined4 uRam002a0dc8;
extern undefined4 DAT_002a0da8;
extern undefined4 DAT_002a0dac;
extern float DAT_002a0db0;
extern int *DAT_002a0db4;
extern float DAT_002a0db8;
extern float DAT_002a0dbc;
extern float DAT_002a0dc0;

// USA 002A0BE8 <- EU 002A0BC4 (Ghidra, non-matching)
// GLOBAL DAT_002a0da8 undefined4
// GLOBAL DAT_002a0dac undefined4
// GLOBAL DAT_002a0db0 float
// GLOBAL DAT_002a0db4 int *
// GLOBAL DAT_002a0db8 float
// GLOBAL DAT_002a0dbc float
// GLOBAL DAT_002a0dc0 float
// GLOBAL UNK_002a0dc4 undefined4
// GLOBAL UNK_002a0dc8 undefined4
// GLOBAL UNK_002a0dcc int

undefined4 func_002A0BE8(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0x58c) = DAT_002a0da8;
  fVar1 = DAT_002a0db0;
  uVar7 = DAT_002a0dac;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffca | 0x82;
  *(undefined4 *)(param_1 + 0x8f8) = uVar7;
  *(float *)(param_1 + 0x8fc) = fVar1;
  piVar2 = DAT_002a0db4;
  *(undefined4 *)(param_1 + 0x900) = uVar7;
  *(float *)(param_1 + 0x3dc) = fVar1;
  *(float *)(param_1 + 0x3e0) = fVar1;
  *(float *)(param_1 + 0x3e4) = fVar1;
  iVar6 = *piVar2;
  if (iVar6 == 0) {
    fVar8 = *(float *)(param_1 + 8);
    uVar9 = *(undefined8 *)(param_1 + 0xc);
    local_30 = fVar1;
    local_2c = fVar1;
    local_28 = fVar1;
  }
  else {
    fVar8 = **(float **)(iVar6 + 0x1c);
    uVar9 = *(undefined8 *)(*(float **)(iVar6 + 0x1c) + 1);
    bVar4 = func_00556E64(iVar6);
    if (bVar4) {
      iVar6 = *(int *)(iVar6 + 0x28);
      local_28 = *(float *)(iVar6 + 0x10);
      local_30 = *(float *)(iVar6 + 8);
      local_2c = *(float *)(iVar6 + 0xc);
      func_00115D70(&local_30,&local_30,DAT_002a0db8);
    }
    else {
      func_004D80A4(&local_30,**(uint **)(iVar6 + 0x24),DAT_002a0dbc);
    }
  }
  fVar1 = DAT_002a0dc0;
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 1000) = 0x80000000;
  *(undefined4 *)(param_1 + 0x934) = 0x80000000;
  pfVar5 = (float *)(param_1 + 0x960);
  *pfVar5 = fVar8;
  *(int *)(param_1 + 0x964) = (int)uVar9;
  *(int *)(param_1 + 0x968) = (int)((ulonglong)uVar9 >> 0x20);
  *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x964) + fVar1;
  func_00115C54(pfVar5,pfVar5,&local_30);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x960);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x964);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x968);
  func_00151148(*(int *)(param_1 + 0x95c),1);
  func_001512B4(*(int *)(param_1 + 0x95c),(float *)(param_1 + 0x960));
  uVar3 = uRam002a0dc4;
  *(undefined4 *)(param_1 + 0x914) = 0x5a;
  *(undefined4 *)(param_1 + 0x918) = uVar3;
  uVar3 = uRam002a0dc8;
  *(undefined4 *)(param_1 + 0x910) = 0;
  *(undefined4 *)(param_1 + 0x92c) = 0xf0;
  *(undefined4 *)(param_1 + 0x930) = uVar3;
  *(undefined4 *)(param_1 + 0x928) = 0;
  *(undefined2 *)(iRam002a0dcc + param_1) = 0;
  *(undefined4 *)(param_1 + 0x920) = 0x14;
  *(undefined4 *)(param_1 + 0x924) = uVar7;
  *(undefined4 *)(param_1 + 0x91c) = 0;
  func_004FABDC(param_1,0,0xffffffff,0);
  *(undefined1 *)(param_1 + 0x895) = 1;
  return func_002AFEC4(param_1,0xf,0x1e);
}

