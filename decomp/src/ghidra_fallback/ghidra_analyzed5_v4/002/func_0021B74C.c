#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0021A4F0(int *param_1);
extern int func_0021ABB0(int param_1);
extern int func_0021BC40(int *param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00521018(int param_1);
extern int func_0065DFCC(undefined4 *param_1,undefined1 param_2);
extern float *DAT_0021ba58;
extern float DAT_0021ba5c;
extern float DAT_0021ba60;
extern undefined4 *DAT_0021ba64;
extern float DAT_0021ba68;
extern float DAT_0021ba6c;
extern float DAT_0021ba70;
extern int DAT_0021ba74;
extern float DAT_0021ba78;
extern int DAT_0021ba7c;
extern int *DAT_0021ba80;
extern float DAT_0021ba84;
extern float DAT_0021ba88;

// USA 0021B74C <- EU 0021B74C (Ghidra, non-matching)
// GLOBAL DAT_0021ba58 float *
// GLOBAL DAT_0021ba5c float
// GLOBAL DAT_0021ba60 float
// GLOBAL DAT_0021ba64 undefined4 *
// GLOBAL DAT_0021ba68 float
// GLOBAL DAT_0021ba6c float
// GLOBAL DAT_0021ba70 float
// GLOBAL DAT_0021ba74 int
// GLOBAL DAT_0021ba78 float
// GLOBAL DAT_0021ba7c int
// GLOBAL DAT_0021ba80 int *
// GLOBAL DAT_0021ba84 float
// GLOBAL DAT_0021ba88 float

void func_0021B74C(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint *puVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  puVar7 = (uint *)(param_1 + 0x4d8);
  local_38 = *DAT_0021ba58;
  local_34 = DAT_0021ba58[1];
  local_30 = DAT_0021ba58[2];
  cVar1 = *(char *)((int)param_1 + 0x1375);
  fVar10 = DAT_0021ba5c;
  if (cVar1 == '\0') {
    func_0021ABB0((int)param_1);
    func_0021A4F0(param_1);
    iVar6 = DAT_0021ba7c;
    puVar2 = DAT_0021ba64;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0xf8]) <= fVar10) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) goto LAB_0021ba34;
    if (param_1[0x4d0] < 0) {
      fVar9 = DAT_0021ba68;
      fVar11 = DAT_0021ba60;
      uVar4 = func_00111A64((uint *)*DAT_0021ba64);
      fVar8 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      iVar6 = VectorFloatToUnsigned(fVar8 * DAT_0021ba6c * fVar9 + fVar9,3);
      param_1[0x4d9] = iVar6;
      if (iVar6 == 0) {
        param_1[0x4da] = (int)ALBW_AS_U32(fVar10);
      }
      else {
        fVar9 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x4da] = (int)ALBW_AS_U32((fVar11 / fVar9));
      }
      *puVar7 = 0;
    }
    else {
      param_1[0x4d9] = 200;
      param_1[0x4da] = iVar6;
      *puVar7 = 0;
    }
    uVar4 = func_00111A64((uint *)*puVar2);
    *(bool *)((int)param_1 + 0x1373) = (int)((ulonglong)uVar4 * 2 >> 0x20) != 0;
    *(undefined1 *)((int)param_1 + 0x1375) = 1;
LAB_0021b854:
    iVar6 = param_1[0x4db];
    if (*(char *)((int)param_1 + 0x1373) == '\0') {
      iVar6 = iVar6 + 0xb60b60;
    }
    else {
      iVar6 = iVar6 + -0xb60b60;
    }
    param_1[0x4db] = iVar6;
    local_38 = fVar10;
    local_34 = fVar10;
    local_30 = fVar10;
    if (param_1[0x4d0] < 0) {
      pfVar5 = (float *)(DAT_0021ba74 + ((uint)(param_1[0x4db] << 2) >> 0x18) * 0x10);
      fVar9 = (float)VectorUnsignedToFloat
                               (param_1[0x4db] << 2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_38 = (*pfVar5 + pfVar5[1] * fVar9 * DAT_0021ba70) * DAT_0021ba78;
      func_004D7F70(&local_38,param_1[0xfa]);
    }
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),&local_38);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar10);
    if (param_1[0x4d0] < 0) {
      if (*puVar7 < (uint)param_1[0x4d9]) {
        *puVar7 = *puVar7 + 1;
        bVar3 = func_00521018((int)param_1);
        if (!bVar3) goto LAB_0021ba34;
      }
    }
    else {
      func_00115C70(&local_38,(float *)(param_1 + 0x4c7),(float *)(param_1 + 0xf4));
      if (*puVar7 < (uint)param_1[0x4d9]) {
        *puVar7 = *puVar7 + 1;
        bVar3 = func_00521018((int)param_1);
        if ((!bVar3) && (0x3e800000 < (int)ALBW_AS_U32((local_38 * local_38 + local_30 * local_30))))
        goto LAB_0021ba34;
      }
      *(undefined1 *)((int)param_1 + 0x1372) = 0;
    }
    *(undefined1 *)((int)param_1 + 0x1375) = 2;
  }
  else {
    if (cVar1 == '\x01') goto LAB_0021b854;
    if (cVar1 != '\x02') goto LAB_0021ba34;
  }
  func_0021ABB0((int)param_1);
  func_0021BC40(param_1);
  if (ALBW_AS_F32(param_1[0xf8]) < fVar10) {
    iVar6 = *DAT_0021ba80;
    if (*(char *)((int)param_1 + 0x1373) != '\0') {
      iVar6 = -iVar6;
    }
    param_1[0x4d4] = iVar6 + param_1[0x4d4];
  }
  if ((ALBW_AS_F32(param_1[0xf8]) < fVar10) && (ALBW_AS_F32(param_1[0xf5]) < ALBW_AS_F32(param_1[3]) - DAT_0021ba84))
  {
    func_0065DFCC(param_1 + 0x22f,0);
  }
LAB_0021ba34:
  param_1[0x140] = (int)(ALBW_AS_F32(param_1[0xf8]) * DAT_0021ba88);
  return;
}

