#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float fRam00355204;
extern int iRam00355200;
extern undefined4 uRam003551fc;
extern undefined4 DAT_003551e4;
extern float DAT_003551e8;
extern undefined4 DAT_003551ec;
extern float DAT_003551f0;
extern undefined4 DAT_003551f4;
extern float DAT_003551f8;

// USA 00354FD4 <- EU 00354FB0 (Ghidra, non-matching)
// GLOBAL DAT_003551e4 undefined4
// GLOBAL DAT_003551e8 float
// GLOBAL DAT_003551ec undefined4
// GLOBAL DAT_003551f0 float
// GLOBAL DAT_003551f4 undefined4
// GLOBAL DAT_003551f8 float
// GLOBAL UNK_003551fc undefined4
// GLOBAL UNK_00355200 int
// GLOBAL UNK_00355204 float

undefined4 func_00354FD4(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  *(undefined4 *)(param_1 + 0x58c) = DAT_003551e4;
  fVar3 = DAT_003551e8;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0xb5;
  *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fVar3;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar6 = DAT_003551ec;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  *(undefined4 *)(param_1 + 0xa50) = 0x1e;
  *(undefined4 *)(param_1 + 0xa54) = uVar6;
  uVar5 = DAT_003551f4;
  *(undefined4 *)(param_1 + 0xa4c) = 0;
  *(undefined4 *)(param_1 + 0x9d4) = uVar5;
  *(float *)(param_1 + 0x9d8) = fVar3;
  *(undefined4 *)(param_1 + 0x9dc) = uVar5;
  *(float *)(param_1 + 0x3dc) = fVar3;
  *(float *)(param_1 + 0x3e0) = fVar3;
  *(float *)(param_1 + 0x3e4) = fVar3;
  fVar4 = DAT_003551f0;
  pfVar2 = (float *)(param_1 + 0xa8c);
  *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_1 + 0x3d4);
  *pfVar2 = *(float *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x10);
  *(float *)(param_1 + 0xa90) = *(float *)(param_1 + 0xa90) + DAT_003551f8;
  local_30 = fVar3;
  local_2c = fVar3;
  local_28 = fVar3;
  func_00115C54(pfVar2,pfVar2,&local_30);
  *(float *)(param_1 + 0x3d0) = *pfVar2;
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xa90);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0xa94);
  func_00151148(*(int *)(param_1 + 0xa88),1);
  func_001512B4(*(int *)(param_1 + 0xa88),pfVar2);
  pfVar2 = (float *)func_00151328(*(int *)(param_1 + 0xa88));
  func_00115154(&fStack_38,&fStack_34,*(uint *)(param_1 + 1000));
  pfVar2[7] = fVar3;
  pfVar2[3] = fVar3;
  pfVar2[4] = fVar4;
  pfVar2[5] = fVar3;
  pfVar2[1] = fVar3;
  *pfVar2 = fStack_34;
  pfVar2[2] = fStack_38;
  pfVar2[6] = -fStack_38;
  pfVar2[8] = fStack_34;
  uVar1 = uRam003551fc;
  *(undefined4 *)(param_1 + 0x9fc) = 0x5a;
  *(undefined4 *)(param_1 + 0xa00) = uVar1;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  *(undefined4 *)(param_1 + 0xa14) = 0x1e;
  *(undefined4 *)(param_1 + 0xa18) = uVar6;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined2 *)(iRam00355200 + param_1) = 0;
  *(undefined4 *)(param_1 + 0xa08) = 0x14;
  *(undefined4 *)(param_1 + 0xa0c) = uVar5;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  func_004FC07C(param_1,0,0xffffffff,0);
  fVar3 = fRam00355204;
  *(undefined4 *)(param_1 + 0xaa4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xaa8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xaac) = *(undefined4 *)(param_1 + 0x10);
  *(float *)(param_1 + 0xaa8) = *(float *)(param_1 + 0xaa8) + fVar3;
  *(float *)(param_1 + 0xaac) = *(float *)(param_1 + 0xaac) + fVar4;
  *(undefined1 *)(param_1 + 0x9bc) = 2;
  *(undefined4 **)(param_1 + 0x8f0) = (undefined4 *)(param_1 + 0xaa4);
  return func_0036BFD0(param_1 + 0x8c8,0xffffffff,0xffffffff);
}

