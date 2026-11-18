#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00284D7C(int param_1);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00583B1C(int param_1);
extern int *DAT_0028483c;
extern float DAT_00284840;
extern int *DAT_00284844;
extern float DAT_00284848;
extern int *DAT_0028484c;
extern float DAT_00284850;

// USA 00284528 <- EU 00284550 (Ghidra, non-matching)
// GLOBAL DAT_0028483c int *
// GLOBAL DAT_00284840 float
// GLOBAL DAT_00284844 int *
// GLOBAL DAT_00284848 float
// GLOBAL DAT_0028484c int *
// GLOBAL DAT_00284850 float

undefined4 func_00284528(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
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
  piVar7 = param_1 + 0x26b;
  fVar10 = DAT_00284840;
  if (*(char *)((int)param_1 + 0x9ed) != '\0') goto LAB_00284774;
  iVar5 = func_00583B1C((int)param_1);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0xac))(param_1,9,0xffffffff);
    *(char *)((int)param_1 + 0x9ed) = *(char *)((int)param_1 + 0x9ed) + '\x01';
  }
  iVar5 = *(int *)(param_1[0x1eb] + 0x14);
  fVar9 = *(float *)(iVar5 + 0xc);
  if (*(float *)(iVar5 + 8) < fVar9) {
    if (((*(float *)(iVar5 + 0x14) <= fVar9) || (DAT_00284848 <= fVar9)) ||
       (*(float *)(iVar5 + 0x14) < DAT_00284848)) goto joined_r0x00284698;
  }
  else {
    if (DAT_00284848 <= fVar9) goto LAB_00284774;
joined_r0x00284698:
    if (*(float *)(iVar5 + 8) < DAT_00284848) goto LAB_00284774;
  }
  *(undefined1 *)((int)param_1 + 0x9ef) = 1;
  *(undefined1 *)(param_1 + 0x27c) = 3;
  func_00284D7C((int)param_1);
  local_2c = DAT_00284850;
  piVar3 = DAT_0028484c;
  param_1[0x26c] = *DAT_0028484c;
  param_1[0x26d] = piVar3[1];
  param_1[0x26e] = piVar3[2];
  param_1[0x26f] = piVar3[3];
  iVar5 = piVar3[5];
  iVar8 = piVar3[6];
  param_1[0x270] = piVar3[4];
  param_1[0x271] = iVar5;
  param_1[0x272] = iVar8;
  param_1[0x273] = piVar3[7];
  param_1[0x274] = piVar3[8];
  param_1[0x275] = piVar3[9];
  *(short *)(param_1 + 0x276) = (short)piVar3[10];
  *(undefined2 *)((int)param_1 + 0x9da) = *(undefined2 *)((int)piVar3 + 0x2a);
  local_24 = local_2c;
  local_28 = fVar10;
  func_00120FBC(*(int *)(*piVar2 + 0x18),piVar7,(float *)(param_1 + 0x265),param_1 + 0x26c,10,0,
                &local_2c);
LAB_00284774:
  if (*(char *)((int)param_1 + 0x9ef) == '\0') {
    return 0;
  }
  func_001E8268(*(int *)(*piVar2 + 0x18),piVar7,param_1 + 0x265,param_1 + 0x26c);
  uVar6 = param_1[0x27a] + 1;
  param_1[0x27a] = uVar6;
  cVar1 = (char)param_1[0x27c];
  if (cVar1 == '\0') {
    if (fVar10 < ALBW_AS_F32(param_1[0x266])) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return 0;
      }
      if (uVar6 < 0x3d) {
        return 0;
      }
      func_001212EC(*(int *)(*piVar2 + 0x18),piVar7,0x1e,0);
      return 1;
    }
    if (uVar6 == 0) {
      return 0;
    }
  }
  func_00284D7C((int)param_1);
  return 0;
}

