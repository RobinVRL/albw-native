#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584D1C(int param_1,int param_2,int *param_3);
extern undefined DAT_0028df88;
extern undefined DAT_0028df98;
extern undefined4 DAT_0028dfa8;
extern int *DAT_0028dfac;
extern int *DAT_0028dfb0;
extern int DAT_0028dfb4;
extern int *DAT_0028dfb8;
extern int DAT_0028dfbc;
extern float DAT_0028dfc0;
extern undefined4 DAT_0028dfc4;
extern float DAT_0028dfc8;

// USA 0028DD64 <- EU 0028DD8C (Ghidra, non-matching)
// GLOBAL DAT_0028df88 undefined
// GLOBAL DAT_0028df98 undefined
// GLOBAL DAT_0028dfa8 undefined4
// GLOBAL DAT_0028dfac int *
// GLOBAL DAT_0028dfb0 int *
// GLOBAL DAT_0028dfb4 int
// GLOBAL DAT_0028dfb8 int *
// GLOBAL DAT_0028dfbc int
// GLOBAL DAT_0028dfc0 float
// GLOBAL DAT_0028dfc4 undefined4
// GLOBAL DAT_0028dfc8 float

undefined4 * func_0028DD64(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define auStack_100 ((undefined1 *)(albw_frame + 0x0))
  #define local_80 ((uint *)(albw_frame + 0x80))
  #define piStack_78 (*(int * *)(albw_frame + 0x88))
  #define local_74 (*(int *)(albw_frame + 0x8c))
  #define local_70 (*(float *)(albw_frame + 0x90))
  #define local_6c (*(undefined4 *)(albw_frame + 0x94))
  #define local_68 (*(float *)(albw_frame + 0x98))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_60 (*(uint *)(albw_frame + 0xa0))
  #define local_2c (*(undefined4 *)(albw_frame + 0xd4))
  #define local_28 (*(undefined1 *)(albw_frame + 0xd8))
  #define local_20 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_1c (*(undefined * *)(albw_frame + 0xe4))
  *(char *)(param_1 + 1) = (char)param_4;
  param_1[3] = param_3;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    if (param_4 == 0) {
      local_1c = &DAT_0028df98;
    }
    else {
      local_1c = &DAT_0028df88;
    }
    local_20 = DAT_0028dfa8;
    puVar3 = func_0016A2FC(puVar2,0xb0,&local_20,1);
  }
  param_1[4] = puVar3;
  *(undefined2 *)(param_1 + 5) = 0xfffe;
  piVar1 = DAT_0028dfac;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar6 = 0;
  iVar8 = *(int *)(*piVar1 + 0x10);
  do {
    func_0016A2A4((uint *)param_1[4],uVar6,*(int **)(iVar8 + 0x110 + (short)uVar6 * 4));
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0xb0);
  func_0016A02C(param_1[4],0x20,(int *)0x80,0);
  if (param_4 == 0) {
    func_00584D1C(param_1[3],param_1[4],DAT_0028dfb8);
  }
  else {
    func_00584D1C(param_1[3],param_1[4],DAT_0028dfb0);
    iVar8 = DAT_0028dfb4;
    iVar7 = 0;
    do {
      uVar6 = func_00564A78(param_1[3],(int *)(iVar8 + iVar7 * 8));
      iVar4 = param_1[4];
      iVar5 = *(int *)(iVar4 + 0x98);
      if (iVar5 < *(int *)(iVar4 + 0x9c)) {
        *(int *)(iVar4 + 0x98) = iVar5 + 1;
        *(short *)(*(int *)(iVar4 + 0xa0) + iVar5 * 2) = (short)uVar6;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  piStack_78 = &local_74;
  local_80[1] = 3;
  local_2c = 10;
  local_28 = 0;
  local_74 = (int)*(short *)((int)param_1 + 0x16);
  iVar8 = DAT_0028dfbc + local_74 * 0x18;
  local_6c = *(undefined4 *)(iVar8 + 0xc);
  local_70 = DAT_0028dfc0;
  if (DAT_0028dfc0 <= *(float *)(iVar8 + 0x10)) {
    local_70 = *(float *)(iVar8 + 0x10);
  }
  local_60 = (uint)auStack_100 | (uint)*(byte *)(iVar8 + 8);
  local_80[0] = 1;
  local_68 = DAT_0028dfc8;
  if (DAT_0028dfc0 <= *(float *)(iVar8 + 0x14)) {
    local_68 = *(float *)(iVar8 + 0x14);
  }
  uStack_64 = DAT_0028dfc4;
  if (*(char *)((int)param_1 + 6) == '\0') {
    local_2c = 0;
  }
  func_0016898C(param_1[4],local_80);
  func_00168E9C((int *)param_1[4],param_1[3],(int *)0x0);
  return param_1;
}

