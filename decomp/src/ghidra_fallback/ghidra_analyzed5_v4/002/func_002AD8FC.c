#include "ghidra_types.h"

extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_002AD0E4(undefined4 *param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_002AD550(int param_1,int param_2,int param_3);
extern int func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5, float fparam_0);
extern int func_002B0754(undefined4 *param_1,int param_2);
extern int func_004F5494(undefined4 *param_1);
extern float func_004F944C(void);
extern int func_004FC18C(int param_1,int param_2);
extern int func_00521078(int param_1);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002adc84;
extern float DAT_002adc88;
extern float DAT_002adc8c;
extern int DAT_002adc90;
extern float DAT_002adc94;
extern float DAT_002adc98;
extern int DAT_002adc9c;
extern float DAT_002adca0;
extern float DAT_002adca4;
extern float DAT_002adca8;
extern float DAT_002adcac;
extern undefined4 *DAT_002add74;
extern float DAT_002add78;

// USA 002AD8FC <- EU 002AD8D8 (Ghidra, non-matching)
// GLOBAL DAT_002adc84 float
// GLOBAL DAT_002adc88 float
// GLOBAL DAT_002adc8c float
// GLOBAL DAT_002adc90 int
// GLOBAL DAT_002adc94 float
// GLOBAL DAT_002adc98 float
// GLOBAL DAT_002adc9c int
// GLOBAL DAT_002adca0 float
// GLOBAL DAT_002adca4 float
// GLOBAL DAT_002adca8 float
// GLOBAL DAT_002adcac float
// GLOBAL DAT_002add74 undefined4 *
// GLOBAL DAT_002add78 float

undefined4 func_002AD8FC(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar16 = DAT_002adc84;
  cVar2 = *(char *)(param_1[0xd] + 0x7fc);
  if ((cVar2 != '\0' && cVar2 != '\x04') && cVar2 != '\x05') {
    if (*(char *)(param_1 + 0x69) == '\0' || cVar2 == '\x02') {
      uVar8 = 0;
      iVar7 = 0x32;
    }
    else {
      uVar8 = 0x96;
      iVar7 = 1;
    }
    func_004FC18C(param_1[0xd],iVar7);
    if (*(short *)(param_1[0xd] + 0x508) < 1) {
      return func_002B0754(param_1,6);
    }
    return func_002AFEF0(param_1,0,uVar8,1,0,DAT_002add78);
  }
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  fVar11 = DAT_002adc8c;
  uVar8 = in_fpscr & 0xfffffff;
  fVar10 = ALBW_AS_F32(param_1[0x6a]);
  if (ALBW_AS_F32(param_1[0x6a]) <= fVar16) {
    fVar10 = DAT_002adc88;
  }
  fVar10 = ALBW_AS_F32(param_1[0x10]) - fVar10;
  param_1[0x10] = ALBW_AS_U32(fVar10);
  fVar11 = *(float *)(param_1[0xd] + 0x4c8) - fVar11;
  if (fVar11 <= fVar16) {
    fVar11 = -fVar11;
  }
  uVar9 = uVar8 | (uint)(-fVar11 <= fVar10) << 0x1d;
  if (!SUB41(uVar9 >> 0x1d,0)) {
    fVar10 = -fVar11;
  }
  param_1[0x10] = ALBW_AS_U32(fVar10);
  if (*(char *)(param_1 + 0x7a) == '\0') {
    fVar11 = *(float *)(param_1[0xd] + 0x36c);
    fVar12 = ALBW_AS_F32(param_1[0x79]);
    uVar1 = uVar8 | (uint)(fVar11 < fVar12) << 0x1f | (uint)(fVar11 == fVar12) << 0x1e;
    uVar9 = uVar1 | (uint)(NAN(fVar11) || NAN(fVar12)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    if ((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) &&
       (uVar9 = uVar8 | (uint)(fVar11 + fVar10 == fVar12) << 0x1e |
                (uint)(fVar12 <= fVar11 + fVar10) << 0x1d, bVar3 = (byte)(uVar9 >> 0x18),
       !(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6))) {
      *(undefined1 *)(param_1 + 0x7a) = 1;
      iVar7 = func_002AD0E4(param_1,1,(float *)0x0,0,0);
      if (iVar7 != 0) {
        return 0;
      }
    }
  }
  fVar11 = ALBW_AS_F32(param_1[0x10]);
  uVar8 = uVar9 & 0xfffffff | (uint)(fVar11 == fVar16) << 0x1e | (uint)(fVar16 <= fVar11) << 0x1d;
  bVar3 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
    if ((*(uint *)(param_1[0xd] + 0x5a0) & 0x800000) != 0) {
      param_1[0x10] = ALBW_AS_U32(fVar16);
LAB_002adb2c:
      if (*(short *)(param_1[0xd] + 0x508) < 1) {
LAB_002adb40:
        func_004F5494(param_1 + 0x3b);
        return func_006624F4(param_1,0);
      }
    }
  }
  else {
    bVar5 = func_00521078(param_1[0xd]);
    if (bVar5) {
      if (*(short *)(DAT_002adc90 + param_1[0xd]) < 1) goto LAB_002adb40;
      param_1[0x1b] = 0;
      *(undefined4 *)(param_1[0xd] + 1000) = param_1[0x24];
      if (*(byte *)(param_1 + 9) < 2) {
        fVar11 = fVar11 * DAT_002adc94;
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 2;
        param_1[0x10] = ALBW_AS_U32(fVar11);
        if (*(char *)(param_1 + 9) == '\0') {
          (**(code **)(*(int *)param_1[0xd] + 0x4c))((int *)param_1[0xd]);
        }
      }
      else {
        fVar11 = func_004F944C();
        param_1[0x10] = ALBW_AS_U32(fVar11);
      }
      cVar2 = *(char *)(param_1 + 9);
      *(char *)(param_1 + 9) = cVar2 + '\x01';
      if ((char)(cVar2 + '\x01') == '\x02') {
        if (*(char *)(param_1[0xd] + 0x7fc) == '\x05') goto LAB_002adb40;
        if (*(char *)(param_1 + 0x69) == '\0') {
          param_1[0xb] = 0;
          param_1[0xc] = ALBW_AS_U32(fVar16);
          param_1[10] = 0;
          goto LAB_002adb9c;
        }
        func_002AD550((int)param_1,param_1[0xb] - param_1[10],1);
      }
    }
    else {
      uVar9 = param_1[0x65];
      if (uVar9 < (uint)param_1[0x66]) {
        uVar9 = uVar9 + 1;
        param_1[0x65] = uVar9;
      }
      if ((uint)param_1[0x66] <= uVar9) goto LAB_002adb2c;
    }
  }
  if (*(byte *)(param_1 + 9) < 2) {
    func_004FC18C(param_1[0xd],0xc);
  }
  else if ((uint)param_1[10] < (uint)param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
  }
LAB_002adb9c:
  uVar9 = param_1[0x1b] + *(int *)(param_1[0xd] + 1000);
  *(uint *)(param_1[0xd] + 1000) = uVar9;
  puVar4 = DAT_002add74;
  if ((uint)*(ushort *)((int)param_1 + 0x1a2) < (uint)*(ushort *)(param_1 + 0x68)) {
    fVar10 = (float)VectorUnsignedToFloat(uVar9 & 0xffffff,(byte)(uVar8 >> 0x15) & 3);
    pfVar6 = (float *)(DAT_002adc9c + (uVar9 >> 0x18) * 0x10);
    fVar15 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(param_1 + 0x68),(byte)(uVar8 >> 0x15) & 3);
    iVar7 = DAT_002adc9c + (*(uint *)(param_1[0xd] + 1000) >> 0x18) * 0x10;
    fVar12 = (float)VectorUnsignedToFloat
                              (*(uint *)(param_1[0xd] + 1000) & 0xffffff,(byte)(uVar8 >> 0x15) & 3);
    fVar12 = fVar12 * DAT_002adc98;
    fVar13 = *(float *)(iVar7 + 8);
    fVar14 = *(float *)(iVar7 + 0xc);
    fVar11 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)((int)param_1 + 0x1a2),(byte)(uVar8 >> 0x15) & 3);
    fVar11 = fVar11 / fVar15;
    if ((int)ALBW_AS_U32(fVar11) < 0x3f000000) {
      fVar11 = fVar11 * DAT_002adca0;
    }
    else {
      fVar11 = DAT_002adcac - (fVar11 - DAT_002adca8) * DAT_002adca0;
    }
    fVar11 = fVar11 * DAT_002adca4;
    param_1[0x1c] = ALBW_AS_U32((*pfVar6 + pfVar6[1] * fVar10 * DAT_002adc98) * fVar11);
    param_1[0x1d] = ALBW_AS_U32(fVar16);
    param_1[0x1e] = ALBW_AS_U32((fVar13 + fVar14 * fVar12) * fVar11);
    *(short *)((int)param_1 + 0x1a2) = *(short *)((int)param_1 + 0x1a2) + 1;
  }
  else {
    param_1[0x1c] = *DAT_002add74;
    param_1[0x1d] = puVar4[1];
    param_1[0x1e] = puVar4[2];
  }
  uVar8 = param_1[0x1f];
  if (uVar8 < (uint)param_1[0x20]) {
    uVar8 = uVar8 + 1;
    param_1[0x1f] = uVar8;
  }
  if ((uint)param_1[0x20] <= uVar8) {
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfff7;
  }
  if ((((uint)param_1[0xb] <= (uint)param_1[10]) && (*(char *)(param_1 + 0x69) != '\0')) &&
     (*(char *)(param_1[0xd] + 0x7fc) != '\x05')) {
    return func_006624F4(param_1,2);
  }
  return func_002ACD14(param_1,0,(int)*(char *)(param_1 + 0x69));
}

