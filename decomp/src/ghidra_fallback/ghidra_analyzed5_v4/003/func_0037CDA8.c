#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0037D2B4(uint param_1);
extern int func_004356B4(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052107C(int param_1);
extern int func_00525BE0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054C21C(int param_1,undefined4 *param_2);
extern int func_00588BE4(int param_1);
extern float DAT_0037d138;
extern int *DAT_0037d13c;
extern int *DAT_0037d140;
extern int *DAT_0037d144;
extern int *DAT_0037d148;
extern int *DAT_0037d14c;
extern undefined4 DAT_0037d150;
extern int DAT_0037d154;
extern float DAT_0037d158;
extern float DAT_0037d15c;
extern float DAT_0037d160;
extern float DAT_0037d164;
extern float DAT_0037d168;
extern float DAT_0037d16c;
extern int DAT_0037d1b4;

// USA 0037CDA8 <- EU 0037CD84 (Ghidra, non-matching)
// GLOBAL DAT_0037d138 float
// GLOBAL DAT_0037d13c int *
// GLOBAL DAT_0037d140 int *
// GLOBAL DAT_0037d144 int *
// GLOBAL DAT_0037d148 int *
// GLOBAL DAT_0037d14c int *
// GLOBAL DAT_0037d150 undefined4
// GLOBAL DAT_0037d154 int
// GLOBAL DAT_0037d158 float
// GLOBAL DAT_0037d15c float
// GLOBAL DAT_0037d160 float
// GLOBAL DAT_0037d164 float
// GLOBAL DAT_0037d168 float
// GLOBAL DAT_0037d16c float
// GLOBAL DAT_0037d1b4 int

/* WARNING: Variable defined which should be unmapped: objStack_48 */

void func_0037CDA8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  fVar11 = DAT_0037d138;
  if (param_1[0x105] == 0) {
    if (*(char *)((int)param_1 + 0x426) == '\0') {
      if ((uint)param_1[0x10c] < (uint)param_1[0x10d]) {
        param_1[0x10c] = param_1[0x10c] + 1;
      }
      else if (*(char *)((int)param_1 + 0x425) == '\0') {
        *(undefined1 *)((int)param_1 + 0x426) = 1;
      }
    }
    if (((short)param_1[0x10b] == 0) || (bVar1 = false, *(char *)((int)param_1 + 0x429) != '\0')) {
      bVar1 = true;
    }
    *(undefined1 *)(param_1 + 0x109) = 0;
    *(undefined1 *)(param_1 + 0x10a) = 0;
    *(undefined1 *)((int)param_1 + 0x429) = 0;
    if ((short)param_1[0x10b] != 2) {
      if (bVar1) {
        objStack_48[1] = param_1[0x10f];
        objStack_48[0] = (uint)ALBW_AS_U32(fVar11);
        objStack_48[2] = (uint)ALBW_AS_U32(fVar11);
        uVar4 = func_0014EEB8((int)param_1,objStack_48,DAT_0037d150,ALBW_AS_F32(param_1[0x10f]));
        *(char *)(param_1 + 0x10a) = (char)uVar4;
      }
      else {
        func_0037D2B4((uint)param_1);
      }
    }
    goto LAB_0037cf14;
  }
  iVar2 = func_0052FBA0(*DAT_0037d13c + 0x3dbbc,param_1[0x105]);
  if (iVar2 != 0) {
    iVar3 = func_00588BE4(iVar2);
    if (iVar3 == *DAT_0037d140) {
      iVar2 = func_00525BE0(iVar2,(float *)(param_1 + 0xf4),fVar11);
    }
    else {
      iVar3 = func_00588BE4(iVar2);
      if (((iVar3 != *DAT_0037d144) && (iVar3 = func_00588BE4(iVar2), iVar3 != *DAT_0037d148)) &&
         (iVar3 = func_00588BE4(iVar2), iVar3 != *DAT_0037d14c)) goto LAB_0037ce5c;
      iVar2 = func_0054C21C(iVar2,param_1 + 0xf4);
    }
    if (iVar2 != 0) goto LAB_0037cf14;
  }
LAB_0037ce5c:
  (**(code **)(*param_1 + 0x58))(param_1);
  param_1[0x105] = 0;
LAB_0037cf14:
  iVar2 = DAT_0037d154;
  if (param_1[0x107] == 0) {
    fVar9 = ALBW_AS_F32(param_1[0xf5]);
    fVar14 = fVar9 - ALBW_AS_F32(param_1[0xdb]);
    piVar5 = (int *)param_1[0x106];
    iVar3 = param_1[0xf4];
    iVar15 = param_1[0xf6];
    fVar16 = DAT_0037d158;
    fVar12 = DAT_0037d15c;
    if (((DAT_0037d154 < param_1[0x110]) &&
        (((int)ALBW_AS_U32(fVar14) < 0x34000000 || (bVar1 = func_0052107C((int)param_1), bVar1)))) &&
       (ALBW_AS_F32(param_1[0xf5]) < ALBW_AS_F32(param_1[3]) + (DAT_0037d160 - ALBW_AS_F32(param_1[0x10f]) * fVar16)))
    {
      fVar10 = fVar14;
      if (DAT_0037d164 < fVar14) {
        fVar10 = DAT_0037d164;
      }
      fVar10 = ALBW_AS_F32(param_1[0x110]) + fVar10;
      param_1[0x110] = (int)ALBW_AS_U32(fVar10);
      if ((int)ALBW_AS_U32(fVar10) <= iVar2) {
        fVar10 = fVar12;
      }
      param_1[0x110] = (int)ALBW_AS_U32(fVar10);
    }
    if (*(char *)((int)param_1 + 0x427) != '\0') {
      fVar10 = ALBW_AS_F32(param_1[0x110]);
      fVar13 = ALBW_AS_F32(param_1[0x111]);
      bVar1 = fVar13 < fVar10;
      bVar7 = fVar13 == fVar10;
      bVar8 = NAN(fVar13) || NAN(fVar10);
      if (!bVar7 && !bVar1) {
        bVar1 = fVar14 < fVar11;
        bVar7 = fVar14 == fVar11;
        bVar8 = NAN(fVar14) || NAN(fVar11);
      }
      if ((!bVar7 && bVar1 == bVar8) &&
         (ALBW_AS_F32(param_1[3]) + (fVar12 - ALBW_AS_F32(param_1[0x10f]) * fVar16) < ALBW_AS_F32(param_1[0xf5]))) {
        fVar10 = fVar10 + fVar14;
        param_1[0x110] = (int)ALBW_AS_U32(fVar10);
        if (fVar13 < fVar10) {
          fVar10 = fVar13;
        }
        param_1[0x110] = (int)ALBW_AS_U32(fVar10);
      }
    }
    fVar14 = ALBW_AS_F32(param_1[0x110]);
    fVar11 = (fVar12 - fVar14 * DAT_0037d168) - DAT_0037d16c;
    fVar12 = ALBW_AS_F32(param_1[0x10f]);
    piVar5[0x16] = (int)ALBW_AS_U32((fVar12 * fVar16));
    piVar5[0x17] = (int)ALBW_AS_U32(fVar14);
    piVar5[0x18] = (int)ALBW_AS_U32((fVar12 * fVar16));
    piVar5[1] = iVar3;
    piVar5[2] = (int)ALBW_AS_U32((fVar9 + fVar11));
    piVar5[3] = iVar15;
    func_004356B4(piVar5);
    objStack_48[0] = 0;
    objStack_48[1] = 0;
    func_0014E2A0((int)param_1,param_1[0x106],param_1 + 0x122,param_1[0x108],0,0);
  }
  else {
    objStack_48[0] = 0;
    objStack_48[1] = 0;
    func_0014E2A0((int)param_1,param_1[0x107],param_1[0x121],param_1[0x108],0,0);
  }
  if (param_1[0x114] == 1) {
    uVar6 = param_1[0x115];
    if ((uint)param_1[0x116] <= uVar6) {
      param_1[0x114] = 2;
      iVar2 = DAT_0037d1b4;
      param_1[0x116] = 100;
      param_1[0x117] = iVar2;
      param_1[0x115] = 0;
      return;
    }
  }
  else {
    if (param_1[0x114] != 2) {
      return;
    }
    iVar2 = param_1[0x104];
    uVar6 = ~((uint)(param_1[0x115] << 0xf) >> 0x10) & 1;
    if ((param_1[0x103] != 0) && (iVar2 != 0)) {
      func_004CF478(param_1[0x103],uVar6);
      func_00151148(iVar2,uVar6);
    }
    uVar6 = param_1[0x115];
    if ((uint)param_1[0x116] <= uVar6) {
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
      return;
    }
  }
  param_1[0x115] = uVar6 + 1;
  return;
}

