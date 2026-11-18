#include "ghidra_types.h"

extern float func_004138A8(byte *param_1,float fparam_0);
extern float func_00413BA4(byte *param_1,float fparam_0);
extern float DAT_00414318;
extern float DAT_0041431c;
extern float *DAT_00414320;
extern int DAT_00414324;

// USA 00414038 <- EU 00414018 (Ghidra, non-matching)
// GLOBAL DAT_00414318 float
// GLOBAL DAT_0041431c float
// GLOBAL DAT_00414320 float *
// GLOBAL DAT_00414324 int

void func_00414038(int param_1,int param_2,float *param_3)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((byte *)(albw_frame + 0x0))
  pfVar2 = DAT_00414320;
  fVar5 = *(float *)(param_1 + 0x44);
  fVar9 = DAT_00414318;
  if ((fVar5 <= DAT_00414318) && (fVar9 = DAT_0041431c, DAT_0041431c <= fVar5)) {
    fVar9 = fVar5;
  }
  fVar10 = *(float *)(param_1 + 0x48);
  fVar5 = DAT_00414318;
  if (((int)ALBW_AS_U32(fVar10) < 0x3f800001) && (fVar5 = fVar10, fVar10 <= DAT_0041431c)) {
    fVar5 = DAT_0041431c;
  }
  fVar11 = *(float *)(param_1 + 0x4c);
  fVar10 = DAT_00414318;
  if (((int)ALBW_AS_U32(fVar11) < 0x3f800001) && (fVar10 = fVar11, fVar11 <= DAT_0041431c)) {
    fVar10 = DAT_0041431c;
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  uVar7 = CONCAT44(DAT_0041431c,DAT_0041431c);
  switch(*(undefined1 *)(param_1 + 0x2d)) {
  case 1:
    goto switchD_004140c8_caseD_1;
  case 2:
    local_40[1] = 1;
    local_40[2] = 1;
    break;
  case 3:
    local_40[0] = 1;
    break;
  case 4:
    local_40[0] = 1;
    goto switchD_004140c8_caseD_1;
  case 5:
    local_40[0] = 1;
    local_40[1] = 1;
    local_40[2] = 1;
    break;
  case 6:
    local_40[0] = 2;
    break;
  case 7:
    local_40[0] = 2;
switchD_004140c8_caseD_1:
    local_40[1] = 1;
    break;
  case 8:
    local_40[0] = 2;
    local_40[1] = 1;
    local_40[2] = 1;
  }
  local_40[3] = *(undefined1 *)(param_1 + 0x23);
  cVar1 = *(char *)(DAT_00414324 + 1);
  if (cVar1 == '\0') {
    fVar11 = func_004138A8(local_40,*DAT_00414320);
    uVar7 = CONCAT44(fVar11,fVar11);
  }
  else {
    fVar11 = DAT_0041431c;
    fVar3 = DAT_0041431c;
    if (cVar1 == '\x01' || cVar1 == '\x02') {
      if ((*(int *)(param_1 + 8) < 2) || (*(char *)(param_1 + 0x2c) != '\x01')) {
        fVar4 = *(float *)(param_1 + 0x30);
        if (*(int *)(param_1 + 8) == 2) {
          if (param_2 == 0) {
            fVar4 = fVar4 - DAT_00414318;
          }
          else if (param_2 == 1) {
            fVar4 = fVar4 + DAT_00414318;
          }
        }
        fVar6 = func_004138A8(local_40,fVar4);
        fVar4 = func_004138A8(local_40,*pfVar2 - fVar4);
        uVar7 = CONCAT44(fVar6,fVar4);
      }
      else if (param_2 == 0) {
        fVar4 = func_004138A8(local_40,*(float *)(param_1 + 0x30));
        uVar7 = CONCAT44(fVar4,(int)uVar7);
      }
      else if (param_2 == 1) {
        fVar4 = DAT_0041431c;
        fVar6 = func_004138A8(local_40,*DAT_00414320 - *(float *)(param_1 + 0x30));
        uVar7 = CONCAT44(fVar4,fVar6);
      }
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        fVar11 = func_00413BA4(local_40,*(float *)(param_1 + 0x34));
        fVar3 = func_00413BA4(local_40,pfVar2[2] - *(float *)(param_1 + 0x34));
      }
      goto LAB_004142a0;
    }
  }
  fVar11 = func_00413BA4(local_40,pfVar2[1]);
  fVar3 = func_00413BA4(local_40,pfVar2[2]);
LAB_004142a0:
  fVar8 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
  fVar6 = fVar11 * fVar8;
  fVar11 = fVar11 * ALBW_AS_F32(uVar7);
  fVar4 = fVar3 * ALBW_AS_F32(uVar7);
  fVar3 = fVar3 * fVar8;
  *param_3 = fVar6 * fVar9;
  param_3[4] = fVar5 * fVar6;
  param_3[1] = fVar11 * fVar9;
  param_3[5] = fVar5 * fVar11;
  param_3[0xb] = fVar10 * fVar4;
  param_3[8] = fVar10 * fVar6;
  param_3[9] = fVar10 * fVar11;
  param_3[10] = fVar10 * fVar3;
  param_3[2] = fVar3 * fVar9;
  param_3[3] = fVar4 * fVar9;
  param_3[6] = fVar5 * fVar3;
  param_3[7] = fVar5 * fVar4;
  return;
}

