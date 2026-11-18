#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int DAT_002b6864;
extern float DAT_002b6868;
extern int DAT_002b686c;
extern float DAT_002b6870;

// USA 002B66B0 <- EU 002B668C (Ghidra, non-matching)
// GLOBAL DAT_002b6864 int
// GLOBAL DAT_002b6868 float
// GLOBAL DAT_002b686c int
// GLOBAL DAT_002b6870 float

void func_002B66B0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define afStack_24 ((float *)(albw_frame + 0xc))
  fVar7 = DAT_002b6868;
  fVar8 = *(float *)(param_1 + 0xa14);
  pfVar4 = (float *)(param_1 + 0xa08);
  if (*(short *)(DAT_002b6864 + param_1) != 0) {
    local_30 = *(float *)(param_1 + 0x3d0);
    local_28 = *(float *)(param_1 + 0x3d8);
    if (DAT_002b686c <= (int)ALBW_AS_U32((local_30 * local_30 + local_28 * local_28))) {
      local_30 = -local_30;
      local_28 = -local_28;
      *(undefined1 *)(param_1 + 0x935) = 0;
      local_2c = fVar7;
      iVar2 = func_0068C690(&local_30);
      func_00115E10(afStack_24,&local_30,(float *)(param_1 + 0x9ac));
      if (local_2c < fVar7) {
        uVar3 = iVar2 + 0x20000000;
      }
      else {
        uVar3 = iVar2 + 0xe0000000;
      }
      func_004D80A4(&local_30,uVar3,DAT_002b6870);
      local_2c = fVar7;
      func_00115C54(&local_30,&local_30,(float *)(param_1 + 0x3d0));
      *pfVar4 = local_30;
      *(float *)(param_1 + 0xa0c) = local_2c;
      *(float *)(param_1 + 0xa10) = local_28;
      return;
    }
  }
  cVar1 = *(char *)(param_1 + 0x935);
  pfVar5 = (float *)(param_1 + 0x97c);
  if (cVar1 == '\0') {
    local_30 = *pfVar5;
    local_2c = *(float *)(param_1 + 0x980);
    local_28 = *(float *)(param_1 + 0x984);
LAB_002b6854:
    *pfVar4 = local_30;
    *(float *)(param_1 + 0xa0c) = local_2c;
    *(float *)(param_1 + 0xa10) = local_28;
    return;
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      local_30 = *(float *)(param_1 + 0x3d0);
      local_2c = *(float *)(param_1 + 0x3d4);
      local_28 = *(float *)(param_1 + 0x3d8);
      func_00115C54(&local_30,&local_30,(float *)(param_1 + 0x9a0));
      goto LAB_002b6854;
    }
    if (cVar1 != '\x03') {
      return;
    }
    fVar8 = -fVar8;
  }
  local_30 = *(float *)(param_1 + 0x3d0);
  local_2c = *(float *)(param_1 + 0x3d4);
  local_28 = *(float *)(param_1 + 0x3d8);
  func_00115C70(&local_30,&local_30,pfVar5);
  fVar6 = SQRT(local_30 * local_30 + local_28 * local_28);
  local_30 = local_30 / fVar6;
  local_28 = local_28 / fVar6;
  fVar6 = fVar6 - fVar8;
  local_2c = fVar7;
  func_00115D70(&local_30,&local_30,fVar6);
  iVar2 = func_0068C690(&local_30);
  func_004D80A4(&local_30,*(int *)(param_1 + 0xa18) + iVar2,fVar6);
  func_00115C54(&local_30,&local_30,pfVar5);
  *pfVar4 = local_30;
  *(float *)(param_1 + 0xa0c) = local_2c;
  *(float *)(param_1 + 0xa10) = local_28;
  return;
}

