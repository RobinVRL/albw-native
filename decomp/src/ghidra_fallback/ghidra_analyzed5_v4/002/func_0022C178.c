#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0022A698(int param_1,int param_2);
extern int func_0022AE40(int param_1);
extern int func_0022C748(int param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F944C(void);
extern int func_00521078(int param_1);
extern float func_0058A404(int param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern float *DAT_0022c600;
extern float *DAT_0022c604;
extern float *DAT_0022c608;
extern float DAT_0022c60c;
extern int *DAT_0022c610;
extern int *DAT_0022c614;
extern int *DAT_0022c618;
extern int *DAT_0022c61c;
extern float DAT_0022c620;
extern float DAT_0022c624;
extern int DAT_0022c628;
extern float DAT_0022c62c;
extern float DAT_0022c630;
extern int *DAT_0022c634;
extern float *DAT_0022c638;
extern undefined4 *DAT_0022c63c;
extern float DAT_0022c640;
extern float *DAT_0022c644;
extern int *DAT_0022c738;
extern float *DAT_0022c73c;
extern int DAT_0022c740;
extern int DAT_0022c744;

// USA 0022C178 <- EU 0022C178 (Ghidra, non-matching)
// GLOBAL DAT_0022c600 float *
// GLOBAL DAT_0022c604 float *
// GLOBAL DAT_0022c608 float *
// GLOBAL DAT_0022c60c float
// GLOBAL DAT_0022c610 int *
// GLOBAL DAT_0022c614 int *
// GLOBAL DAT_0022c618 int *
// GLOBAL DAT_0022c61c int *
// GLOBAL DAT_0022c620 float
// GLOBAL DAT_0022c624 float
// GLOBAL DAT_0022c628 int
// GLOBAL DAT_0022c62c float
// GLOBAL DAT_0022c630 float
// GLOBAL DAT_0022c634 int *
// GLOBAL DAT_0022c638 float *
// GLOBAL DAT_0022c63c undefined4 *
// GLOBAL DAT_0022c640 float
// GLOBAL DAT_0022c644 float *
// GLOBAL DAT_0022c738 int *
// GLOBAL DAT_0022c73c float *
// GLOBAL DAT_0022c740 int
// GLOBAL DAT_0022c744 int

/* WARNING: Variable defined which should be unmapped: objStack_30 */

void func_0022C178(int *param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *in_r3;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  int *piVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  func_00115C54((float *)objStack_30,(float *)(param_1 + 0xf4),DAT_0022c600);
  param_1[0x334] = objStack_30[0];
  param_1[0x335] = objStack_30[1];
  param_1[0x336] = iStack_28;
  func_00115C54((float *)objStack_30,(float *)(param_1 + 0xf4),DAT_0022c604);
  param_1[0x337] = objStack_30[0];
  param_1[0x338] = objStack_30[1];
  param_1[0x339] = iStack_28;
  func_00115C54((float *)objStack_30,(float *)(param_1 + 0xf4),DAT_0022c608);
  param_1[0x33a] = objStack_30[0];
  param_1[0x33b] = objStack_30[1];
  param_1[0x33c] = iStack_28;
  if ((int *)param_1[0x2ab] != (int *)0x0) {
    func_00169A80((int *)param_1[0x2ab],objStack_30[1],iStack_28,in_r3);
    func_00168E9C((int *)param_1[0x2ab],param_1[0x103],(int *)0x0);
  }
  if ((param_1[0x167] & 0x80U) != 0) {
    objStack_30[0] = 0;
    objStack_30[1] = 0;
    iVar5 = func_0014E2A0((int)param_1,param_1[0x10c],0,0x200,0,0);
    piVar10 = DAT_0022c610;
    fVar13 = DAT_0022c60c;
    if (iVar5 != 0) {
      func_002917A4(*DAT_0022c610,param_1 + 0xf4,0,DAT_0022c60c);
    }
    objStack_30[0] = 0;
    objStack_30[1] = 0;
    iVar5 = func_0014E2A0((int)param_1,param_1[0x10c],0,0x400,0,0);
    if (iVar5 != 0) {
      func_00291A38(*piVar10,param_1 + 0xf4,fVar13);
    }
  }
  piVar10 = DAT_0022c614;
  param_1[0x2b2] = param_1[0xfa];
  piVar12 = DAT_0022c618;
  param_1[0x2b3] = param_1[0xfa] + *piVar10;
  piVar10 = DAT_0022c61c;
  param_1[0x2b4] = param_1[0x2b2] + *piVar12;
  param_1[0x2b5] = param_1[0x2b2] + *piVar10;
  func_0022A698((int)param_1,0);
  iVar5 = func_004F70A8(param_1);
  if (iVar5 != 0) {
    piVar12 = param_1 + 0x240;
    piVar10 = param_1 + 0x23f;
    if (((char)*piVar12 != '\x13' && (char)*piVar12 != '\x14') &&
       (iVar5 = func_004F8998(param_1,0,(char *)0x0), iVar5 != 0)) {
      func_0065E8B8(piVar10,0x13);
    }
    pfVar9 = (float *)param_1[0x244];
    piVar6 = (int *)(param_1[0x246] + (char)param_1[0x240] * 8);
    uVar7 = *(uint *)(param_1[0x246] + (char)param_1[0x240] * 8 + 4);
    piVar8 = (int *)((int)pfVar9 + ((int)uVar7 >> 1));
    if ((uVar7 & 1) != 0) {
      piVar6 = (int *)(*piVar6 + *piVar8);
    }
    (*(code *)*piVar6)(piVar8);
    iVar5 = *piVar10;
    *piVar10 = iVar5 + 1;
    if (param_1[0x243] != 0) {
      fVar13 = (float)VectorUnsignedToFloat(iVar5 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x243],1,fVar13);
    }
    cVar1 = (char)*piVar12;
    if ((cVar1 != '\0' && cVar1 != '\x14') && (*(char *)((int)param_1 + 0xd05) == '\0')) {
      if ((cVar1 == '\x0e' || cVar1 == '\x02') || (*(char *)((int)param_1 + 0xd06) != '\0')) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      func_004F8964((float *)(param_1 + 0xf8),iVar5,DAT_0022c620);
    }
    bVar3 = func_00521078((int)param_1);
    fVar13 = DAT_0022c624;
    if ((bVar3) && (ALBW_AS_F32(param_1[0xf8]) <= DAT_0022c624)) {
      fVar14 = func_004F944C();
      param_1[0xf8] = (int)ALBW_AS_U32(fVar14);
    }
    pfVar11 = (float *)(param_1 + 699);
    fVar14 = SQRT(*pfVar11 * *pfVar11 + ALBW_AS_F32(param_1[0x2bd]) * ALBW_AS_F32(param_1[0x2bd]));
    if (DAT_0022c628 <= (int)ALBW_AS_U32(fVar14)) {
      if (DAT_0022c62c < -fVar14) {
        fparam_0 = fVar14 + DAT_0022c62c;
      }
      else {
        fparam_0 = fVar13;
        if (-fVar14 < DAT_0022c630) {
          fparam_0 = fVar14 - DAT_0022c62c;
        }
      }
      if ((int)ALBW_AS_U32(fparam_0) < DAT_0022c628) {
        *pfVar11 = fVar13;
        param_1[700] = (int)ALBW_AS_U32(fVar13);
        param_1[0x2bd] = (int)ALBW_AS_U32(fVar13);
      }
      else {
        func_00115DC8(pfVar11);
        func_00115D70(pfVar11,pfVar11,fparam_0);
      }
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar11);
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar9);
    func_0022C748((int)param_1);
    func_0022AE40((int)param_1);
    piVar6 = DAT_0022c738;
    piVar10 = DAT_0022c634;
    if ((char)*piVar12 != '\a' && (char)*piVar12 != '\x0f') {
      if (*(char *)((int)param_1 + 0xd06) == '\0') {
        param_1[0x32e] = *DAT_0022c738;
        param_1[0x32f] = piVar6[1];
        param_1[0x330] = piVar6[2];
      }
      else {
        param_1[0x32e] = *DAT_0022c634;
        param_1[0x32f] = piVar10[1];
        param_1[0x330] = piVar10[2];
      }
      param_1[0x15c] = param_1[0x32e];
      param_1[0x15d] = param_1[0x32f];
      param_1[0x15e] = param_1[0x330];
    }
    pfVar9 = (float *)(param_1 + 0x331);
    if (*(char *)((int)param_1 + 0xd09) == '\0') {
      func_00115C54((float *)objStack_30,pfVar9,DAT_0022c73c);
      param_1[0x113] = objStack_30[0];
      param_1[0x114] = objStack_30[1];
      param_1[0x115] = iStack_28;
      func_00115C54((float *)objStack_30,pfVar9,DAT_0022c73c);
      param_1[0x119] = objStack_30[0];
      param_1[0x11a] = objStack_30[1];
      param_1[0x11b] = iStack_28;
    }
    else {
      func_00115C54((float *)objStack_30,pfVar9,DAT_0022c638);
      param_1[0x113] = objStack_30[0];
      param_1[0x114] = objStack_30[1];
      param_1[0x115] = iStack_28;
      func_00115C54((float *)objStack_30,pfVar9,DAT_0022c638);
      fVar13 = DAT_0022c640;
      param_1[0x119] = objStack_30[0];
      param_1[0x11a] = objStack_30[1];
      param_1[0x11b] = iStack_28;
      func_004F8864((int)param_1,DAT_0022c63c,0,fVar13);
    }
    if (param_1[0x2ac] != 0) {
      objStack_30[0] = param_1[0x254];
      objStack_30[1] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0x255]) - ALBW_AS_F32(param_1[0x32f])));
      func_00115C54((float *)objStack_30,(float *)objStack_30,DAT_0022c644);
      func_001512B4(param_1[0x2ac],(float *)objStack_30);
    }
    if (*(char *)((int)param_1 + 0xd0a) == '\0') {
      func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
    }
    else {
      func_004F88A0(param_1,(undefined2 *)param_1[0x2a8]);
    }
    fVar13 = func_0058A404((int)param_1);
    if (DAT_0022c740 < (int)ALBW_AS_U32(fVar13)) {
      if (DAT_0022c744 < (int)ALBW_AS_U32(fVar13)) {
        return;
      }
      sVar2 = (short)param_1[0x142];
      uVar4 = 1;
    }
    else {
      sVar2 = (short)param_1[0x142];
      uVar4 = 2;
    }
    if (sVar2 < 1) {
      uVar4 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x859) = uVar4;
  }
  return;
}

