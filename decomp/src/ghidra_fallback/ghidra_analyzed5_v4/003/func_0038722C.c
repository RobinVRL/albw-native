#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern float DAT_003873a0;
extern float DAT_003873a4;
extern float DAT_003873a8;
extern float DAT_003873ac;
extern int *DAT_003873b0;

// USA 0038722C <- EU 00387208 (Ghidra, non-matching)
// GLOBAL DAT_003873a0 float
// GLOBAL DAT_003873a4 float
// GLOBAL DAT_003873a8 float
// GLOBAL DAT_003873ac float
// GLOBAL DAT_003873b0 int *

undefined4 func_0038722C(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
          *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30;
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x130) * 0x30;
  local_40 = *(float *)(iVar5 + 0xc);
  local_3c = *(undefined4 *)(iVar5 + 0x1c);
  local_38 = *(undefined4 *)(iVar5 + 0x2c);
  local_28 = *(float *)(iVar4 + 0xc);
  local_24 = *(undefined4 *)(iVar4 + 0x1c);
  local_20 = *(undefined4 *)(iVar4 + 0x2c);
  func_00115C70(&local_1c,&local_28,&local_40);
  local_34 = local_1c;
  uStack_30 = uStack_18;
  uStack_2c = uStack_14;
  func_00115DC8(&local_34);
  func_00115D70(&local_1c,&local_34,DAT_003873a0);
  local_50 = local_1c;
  uStack_4c = uStack_18;
  uStack_48 = uStack_14;
  func_00115C54(&local_1c,&local_40,&local_50);
  fVar8 = DAT_003873a8;
  fVar1 = DAT_003873a4;
  *(float *)(param_1 + 0x4c) = local_1c;
  *(undefined4 *)(param_1 + 0x50) = uStack_18;
  *(undefined4 *)(param_1 + 0x54) = uStack_14;
  fVar2 = DAT_003873ac;
  *(float *)(param_1 + 0x50) = *(float *)(*(int *)(param_1 + 4) + 0x3d4) + fVar1;
  fVar8 = *(float *)(param_1 + 0x148) * fVar8;
  *(float *)(param_1 + 0xa0) = fVar8;
  *(float *)(param_1 + 0xa4) = fVar8 * fVar2;
  *(float *)(param_1 + 0xa8) = fVar8;
  func_004356B4((int *)(param_1 + 0x48));
  piVar3 = DAT_003873b0;
  if (*(char *)(param_1 + 0x37) == '\0') {
    if (*(char *)(param_1 + 0x34) == '\0') {
      *(undefined1 *)(param_1 + 0x34) = 1;
      func_004A8BFC(*piVar3,param_1 + 0xb4,3);
      iVar4 = *(int *)(param_1 + 4);
      uVar6 = *(undefined4 *)(iVar4 + 0x958);
      uVar7 = *(undefined4 *)(iVar4 + 0x95c);
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar4 + 0x960);
      *(undefined4 *)(param_1 + 0xd8) = uVar6;
      *(undefined4 *)(param_1 + 0xdc) = uVar7;
    }
  }
  else if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    return func_004A9120(*piVar3,param_1 + 0xb4);
  }
  return 0;
}

