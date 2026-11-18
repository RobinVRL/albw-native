#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00284D7C(int param_1);
extern int func_004BEB08(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00583B1C(int param_1);
extern int *DAT_0028483c;
extern float DAT_00284840;
extern int *DAT_00284844;
extern float DAT_00284848;
extern int *DAT_0028484c;
extern float DAT_00284850;

// USA 00284460 <- EU 00284488 (Ghidra, non-matching)
// GLOBAL DAT_0028483c int *
// GLOBAL DAT_00284840 float
// GLOBAL DAT_00284844 int *
// GLOBAL DAT_00284848 float
// GLOBAL DAT_0028484c int *
// GLOBAL DAT_00284850 float

undefined4 func_00284460(int *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  if (*(char *)((int)param_1 + 0x9ee) == '\n') {
    uVar5 = func_004BEB08((int)param_1,param_2);
    return uVar5;
  }
  if (*(byte *)(param_1 + 0x27b) != param_2) {
    uVar7 = param_2 & 0xff;
    if (uVar7 == 0) {
      *(undefined1 *)((int)param_1 + 0x919) = 0;
      if (param_1[0x1e9] != 0) {
        func_004CF478(param_1[0x1e9],1);
      }
    }
    else if (uVar7 == 1) {
      (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
    }
    else if (uVar7 == 2) {
      (**(code **)(*param_1 + 0xac))(param_1,8,0xffffffff);
      *(undefined1 *)((int)param_1 + 0x9ef) = 0;
    }
    *(char *)(param_1 + 0x27b) = (char)param_2;
    param_1[0x279] = 0;
    *(undefined1 *)((int)param_1 + 0x9ed) = 0;
  }
  param_1[0x279] = param_1[0x279] + 1;
  piVar2 = DAT_00284844;
  cVar1 = (char)param_1[0x27b];
  if (cVar1 == '\0') {
    return 1;
  }
  if (cVar1 == '\x01') {
    bVar4 = func_0051D27C(param_1 + 0xfa,DAT_0028483c[-1],*DAT_0028483c);
    if (!bVar4) {
      return 0;
    }
    (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
    return 1;
  }
  if (cVar1 != '\x02') {
    return 0;
  }
  piVar8 = param_1 + 0x26b;
  fVar11 = DAT_00284840;
  if (*(char *)((int)param_1 + 0x9ed) != '\0') goto LAB_00284774;
  iVar6 = func_00583B1C((int)param_1);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0xac))(param_1,9,0xffffffff);
    *(char *)((int)param_1 + 0x9ed) = *(char *)((int)param_1 + 0x9ed) + '\x01';
  }
  iVar6 = *(int *)(param_1[0x1eb] + 0x14);
  fVar10 = *(float *)(iVar6 + 0xc);
  if (*(float *)(iVar6 + 8) < fVar10) {
    if (((*(float *)(iVar6 + 0x14) <= fVar10) || (DAT_00284848 <= fVar10)) ||
       (*(float *)(iVar6 + 0x14) < DAT_00284848)) goto joined_r0x00284698;
  }
  else {
    if (DAT_00284848 <= fVar10) goto LAB_00284774;
joined_r0x00284698:
    if (*(float *)(iVar6 + 8) < DAT_00284848) goto LAB_00284774;
  }
  *(undefined1 *)((int)param_1 + 0x9ef) = 1;
  *(undefined1 *)(param_1 + 0x27c) = 3;
  func_00284D7C((int)param_1);
  fStack_2c = DAT_00284850;
  piVar3 = DAT_0028484c;
  param_1[0x26c] = *DAT_0028484c;
  param_1[0x26d] = piVar3[1];
  param_1[0x26e] = piVar3[2];
  param_1[0x26f] = piVar3[3];
  iVar6 = piVar3[5];
  iVar9 = piVar3[6];
  param_1[0x270] = piVar3[4];
  param_1[0x271] = iVar6;
  param_1[0x272] = iVar9;
  param_1[0x273] = piVar3[7];
  param_1[0x274] = piVar3[8];
  param_1[0x275] = piVar3[9];
  *(short *)(param_1 + 0x276) = (short)piVar3[10];
  *(undefined2 *)((int)param_1 + 0x9da) = *(undefined2 *)((int)piVar3 + 0x2a);
  fStack_24 = fStack_2c;
  fStack_28 = fVar11;
  func_00120FBC(*(int *)(*piVar2 + 0x18),piVar8,(float *)(param_1 + 0x265),param_1 + 0x26c,10,0,
                &fStack_2c);
LAB_00284774:
  if (*(char *)((int)param_1 + 0x9ef) == '\0') {
    return 0;
  }
  func_001E8268(*(int *)(*piVar2 + 0x18),piVar8,param_1 + 0x265,param_1 + 0x26c);
  uVar7 = param_1[0x27a] + 1;
  param_1[0x27a] = uVar7;
  cVar1 = (char)param_1[0x27c];
  if (cVar1 == '\0') {
    if (fVar11 < ALBW_AS_F32(param_1[0x266])) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return 0;
      }
      if (uVar7 < 0x3d) {
        return 0;
      }
      func_001212EC(*(int *)(*piVar2 + 0x18),piVar8,0x1e,0);
      return 1;
    }
    if (uVar7 == 0) {
      return 0;
    }
  }
  func_00284D7C((int)param_1);
  return 0;
}

