#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_002E9BFC(int param_1);
extern int func_002EAF58(int param_1);
extern int func_002EBFB8(int param_1);
extern int func_002F08B0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003595D4(float *param_1);
extern int func_0039DDC4(int param_1);
extern int func_003A40E4(int param_1);
extern int func_00437874(float *param_1,float *param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_0058A404(int param_1);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_002f5ffc;
extern float DAT_002f6000;
extern float DAT_002f6004;
extern float DAT_002f6008;
extern float DAT_002f600c;
extern float DAT_002f6010;
extern int DAT_002f6014;
extern int *DAT_002f6018;
extern float DAT_002f601c;
extern int DAT_002f6020;
extern float DAT_002f6024;
extern int DAT_002f6160;
extern undefined4 *DAT_002f6164;

// USA 002F5D04 <- EU 002F5CE0 (Ghidra, non-matching)
// GLOBAL DAT_002f5ffc float
// GLOBAL DAT_002f6000 float
// GLOBAL DAT_002f6004 float
// GLOBAL DAT_002f6008 float
// GLOBAL DAT_002f600c float
// GLOBAL DAT_002f6010 float
// GLOBAL DAT_002f6014 int
// GLOBAL DAT_002f6018 int *
// GLOBAL DAT_002f601c float
// GLOBAL DAT_002f6020 int
// GLOBAL DAT_002f6024 float
// GLOBAL DAT_002f6160 int
// GLOBAL DAT_002f6164 undefined4 *

undefined4 func_002F5D04(int *param_1,float fparam_0,float fparam_1,float fparam_2)

{
  short sVar1;
  byte bVar2;
  float fparam_0_00;
  float fparam_2_00;
  undefined1 uVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_r1;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fparam_3;
  undefined8 uVar14;
  
  *(undefined1 *)((int)param_1 + 0xd43) = 0;
  fVar12 = DAT_002f6004;
  fVar11 = DAT_002f6000;
  fVar13 = DAT_002f5ffc;
  uVar14 = CONCAT44(DAT_002f6004,DAT_002f6000);
  if ((uint)param_1[0x2cc] < (uint)param_1[0x2cd]) {
    param_1[0x2cc] = param_1[0x2cc] + 1;
  }
  if ((uint)param_1[0x2cf] < (uint)param_1[0x2d0]) {
    param_1[0x2cf] = param_1[0x2cf] + 1;
  }
  fparam_3 = DAT_002f6008;
  fparam_0_00 = fVar11;
  fparam_2_00 = fVar11;
  if ((uint)param_1[0x31d] < (uint)param_1[0x31e]) {
    param_1[0x31d] = param_1[0x31d] + 1;
    fparam_3 = DAT_002f600c;
    fparam_0_00 = ALBW_AS_F32(param_1[0x31c]);
    fparam_2_00 = fVar13;
    fVar12 = fVar11;
  }
  func_0068C794((float *)(param_1 + 0x31b),fparam_0_00,fVar12,fparam_2_00,fparam_3);
  fVar12 = DAT_002f6010;
  param_1[0x319] = param_1[0x31a] + param_1[0x319];
  param_1[0x316] = (int)uVar14;
  pfVar4 = (float *)(DAT_002f6014 + ((uint)param_1[0x319] >> 0x18) * 0x10);
  fVar11 = (float)VectorUnsignedToFloat(param_1[0x319] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (*pfVar4 + pfVar4[1] * fVar11 * fVar12) * ALBW_AS_F32(param_1[0x31b]);
  param_1[0x317] = (int)ALBW_AS_U32(fVar12);
  param_1[0x318] = (int)uVar14;
  if (*(char *)((int)param_1 + 0xd45) == '\0') {
    iVar5 = func_0052FBA0(*DAT_002f6018 + 0x3dbbc,param_1[0x324]);
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0x410) == '\0')) {
      func_0039DDC4(iVar5);
    }
    fVar12 = DAT_002f601c;
    func_00437874((float *)(param_1 + 0xf4),(float *)(param_1 + 0x38c),DAT_002f601c);
    if ((short)param_1[0x142] < 1) {
      *(undefined1 *)((int)param_1 + 0x859) = 0;
    }
    else {
      fVar12 = func_0058A404((int)param_1);
      if (DAT_002f6020 < (int)ALBW_AS_U32(fVar12)) {
        fVar12 = func_0058A404((int)param_1);
        if ((int)ALBW_AS_U32(fVar12) < 0x3f000001) {
          sVar1 = (short)param_1[0x142];
          uVar3 = 1;
        }
        else {
          sVar1 = (short)param_1[0x142];
          uVar3 = 0;
        }
      }
      else {
        sVar1 = (short)param_1[0x142];
        uVar3 = 2;
      }
      if (sVar1 < 1) {
        uVar3 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x859) = uVar3;
    }
  }
  iVar5 = func_004F70A8(param_1);
  if (iVar5 == 0) {
    return 0;
  }
  piVar9 = param_1 + 0x232;
  if (((char)param_1[0x233] != '!' && (char)param_1[0x233] != '\"') &&
     (iVar5 = func_004F8998(param_1,0,(char *)0x0), iVar5 != 0)) {
    func_006640EC(piVar9,0x21,fVar12);
  }
  piVar6 = (int *)(param_1[0x239] + (char)param_1[0x233] * 8);
  uVar7 = *(uint *)(param_1[0x239] + (char)param_1[0x233] * 8 + 4);
  piVar8 = (int *)(param_1[0x237] + ((int)uVar7 >> 1));
  if ((uVar7 & 1) != 0) {
    piVar6 = (int *)(*piVar6 + *piVar8);
  }
  (*(code *)*piVar6)(piVar8);
  iVar5 = *piVar9;
  *piVar9 = iVar5 + 1;
  if (param_1[0x236] != 0) {
    fVar12 = (float)VectorUnsignedToFloat(iVar5 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x236],1,fVar12);
  }
  fVar12 = DAT_002f6024 -
           SQRT((ALBW_AS_F32(param_1[0x38c]) - ALBW_AS_F32(param_1[0xf4])) *
                (ALBW_AS_F32(param_1[0x38c]) - ALBW_AS_F32(param_1[0xf4])) +
                (ALBW_AS_F32(param_1[0x38e]) - ALBW_AS_F32(param_1[0xf6])) *
                (ALBW_AS_F32(param_1[0x38e]) - ALBW_AS_F32(param_1[0xf6])));
  param_1[0x306] = (int)ALBW_AS_U32(fVar12);
  fVar11 = ALBW_AS_F32(uVar14);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar11) << 0x1f | (uint)(fVar12 == fVar11) << 0x1e;
  uVar10 = uVar7 | (uint)(NAN(fVar12) || NAN(fVar11)) << 0x1c;
  bVar2 = (byte)(uVar7 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
    uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),fVar12);
  }
  param_1[0x306] = (int)uVar14;
  if (*(char *)((int)param_1 + 0xd45) == '\x01') {
    pfVar4 = (float *)(param_1 + 0x2f6);
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar4);
    func_00115D70(pfVar4,pfVar4,ALBW_AS_F32(param_1[0x307]));
  }
  fVar12 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
  func_003A40E4((int)(param_1 + 0x23b));
  if (param_1[0x248] == 0) {
    func_0051D2F4(param_1 + 0x249,0,DAT_002f6160,0x7fffffff,fVar13);
  }
  else if (param_1[0x248] == 1) {
    fVar13 = (float)VectorSignedToFloat(*DAT_002f6164,(byte)(uVar10 >> 0x15) & 3);
    func_0051D2CC(param_1 + 0x249,
                  (int)(fVar13 * *(float *)(*(int *)(*(int *)(*(int *)(param_1[0x23c] + 0x40c) +
                                                             0x24) + 0x14) +
                                            *(int *)(param_1[0x23c] + 0xb80) * 0x30 + 0x28)),fVar12)
    ;
  }
  func_003595D4((float *)(param_1 + 0x24c));
  fVar13 = ALBW_AS_F32(param_1[0x250]);
  pfVar4 = (float *)param_1[0x251];
  iVar5 = param_1[0x24f];
  if (*(char *)((int)param_1 + 0xd45) == '\0') {
    fVar13 = fVar13 + fVar12;
  }
  param_1[0x15c] = iVar5;
  param_1[0x15d] = (int)ALBW_AS_U32(fVar13);
  param_1[0x15e] = (int)pfVar4;
  if (((param_1[0x167] & 0x10U) != 0) && (*(char *)((int)param_1 + 0xd43) == '\0')) {
    func_004F8964((float *)(param_1 + 0xf8),1,ALBW_AS_F32(param_1[0x2e6]));
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  }
  func_004F48F0((int)param_1);
  *(undefined1 *)(param_1 + 0x351) = 0;
  func_004F5588((int)param_1);
  func_002F08B0(param_1,extraout_r1,iVar5,(int *)pfVar4,fVar12);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar4);
  func_002EBFB8((int)param_1);
  func_002E9BFC((int)param_1);
  return func_002EAF58((int)param_1);
}

