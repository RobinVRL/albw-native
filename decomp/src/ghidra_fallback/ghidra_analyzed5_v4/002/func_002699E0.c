#include "ghidra_types.h"

extern int func_00222A80(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_00266FF8(int param_1);
extern int func_00268AE4(int param_1);
extern int func_00268E70(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0035B0A8(void);
extern int func_0035B0E8(void);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0053A554(int param_1,float *param_2,float *param_3);
extern int func_0053A900(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern float fRam00269e5c;
extern int *DAT_00269e34;
extern undefined4 *DAT_00269e38;
extern int DAT_00269e3c;
extern int DAT_00269e40;
extern int *DAT_00269e44;
extern float *DAT_00269e48;
extern float *DAT_00269e4c;
extern float DAT_00269e50;
extern float *DAT_00269e54;
extern float *DAT_00269e58;
extern float DAT_00269e60;
extern int DAT_00269e64;

// USA 002699E0 <- EU 00269A08 (Ghidra, non-matching)
// GLOBAL DAT_00269e34 int *
// GLOBAL DAT_00269e38 undefined4 *
// GLOBAL DAT_00269e3c int
// GLOBAL DAT_00269e40 int
// GLOBAL DAT_00269e44 int *
// GLOBAL DAT_00269e48 float *
// GLOBAL DAT_00269e4c float *
// GLOBAL DAT_00269e50 float
// GLOBAL DAT_00269e54 float *
// GLOBAL DAT_00269e58 float *
// GLOBAL DAT_00269e60 float
// GLOBAL DAT_00269e64 int
// GLOBAL UNK_00269e5c float

void func_002699E0(int *param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 extraout_r1;
  uint uVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  uint in_fpscr;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define iStack_3c (*(int *)(albw_frame + 0x4))
  #define pfStack_38 (*(float * *)(albw_frame + 0x8))
  #define afStack_28 ((float *)(albw_frame + 0x18))
  func_004F9554(param_1[0x10c],0,0,1);
  func_004F9554(param_1[0x10d],0,0,1);
  *(undefined1 *)((int)param_1 + 0xba5) = 0;
  puVar5 = DAT_00269e38;
  piVar14 = DAT_00269e34;
  param_1[0x2e6] = param_1[0x2e5];
  iVar13 = 0;
  piVar6 = (int *)func_005841A8(*piVar14,*puVar5,*(int **)(DAT_00269e3c + *piVar14));
  if (*(int **)(*piVar14 + 0x3dbc8) != piVar6) {
    do {
      iVar8 = *piVar6;
      cVar2 = '\0';
      if (iVar8 != 0) {
        cVar2 = *(char *)(iVar8 + 0x478);
      }
      if (iVar8 != 0 && cVar2 != '\0') {
        iVar13 = iVar13 + 1;
      }
      piVar6 = (int *)func_005841A8(*piVar14,*puVar5,piVar6 + 1);
    } while (*(int **)(*piVar14 + 0x3dbc8) != piVar6);
  }
  param_1[0x2e5] = iVar13;
  *(char *)((int)param_1 + 0xba9) = (char)param_1[0x2ea];
  iVar13 = func_0053A900((int)param_1);
  *(char *)(param_1 + 0x2ea) = (char)iVar13;
  if (iVar13 == 0) {
    uVar7 = 0;
  }
  else {
    sVar3 = (short)param_1[0x142];
    if (sVar3 < 0x11) {
      uVar7 = 2;
      if (sVar3 < 1) {
        uVar7 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x859) = uVar7;
      goto LAB_00269b18;
    }
    if (0x20 < sVar3) goto LAB_00269b18;
    uVar7 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x859) = uVar7;
LAB_00269b18:
  iVar13 = func_004F70A8(param_1);
  if (iVar13 != 0) {
    piVar14 = param_1 + 0x232;
    if ((*(char *)(DAT_00269e40 + (int)param_1) != '\x13' &&
         *(char *)(DAT_00269e40 + (int)param_1) != '\x14') &&
       (iVar13 = func_004F8998(param_1,0,(char *)0x0), iVar13 != 0)) {
      func_00660718(piVar14,0x13);
    }
    if ((param_1[0x2ca] < 1) && (0x17 < param_1[0x2e8])) {
      if (((char)param_1[0x2c5] != '\0') &&
         ((char)param_1[0x2ea] != *(char *)((int)param_1 + 0xba9))) {
        func_00268E70((int)param_1);
      }
      iVar13 = DAT_00269e64;
      if ((char)param_1[0x2ea] == '\0') {
        param_1[0x23f] = 600;
        param_1[0x240] = iVar13;
        param_1[0x23e] = 0;
        *(undefined1 *)((int)param_1 + 0xbab) = 0;
      }
      else {
        if ((*(int *)(*DAT_00269e44 + 0x44) == 0) && (iVar13 = func_0035B0A8(), iVar13 == 0)) {
          func_0035B0E8();
        }
        if ((uint)param_1[0x23e] < (uint)param_1[0x23f]) {
          param_1[0x23e] = param_1[0x23e] + 1;
        }
      }
    }
    piVar6 = (int *)(param_1[0x239] + (char)param_1[0x233] * 8);
    uVar9 = *(uint *)(param_1[0x239] + (char)param_1[0x233] * 8 + 4);
    piVar10 = (int *)(param_1[0x237] + ((int)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      piVar6 = (int *)(*piVar6 + *piVar10);
    }
    (*(code *)*piVar6)(piVar10);
    iVar13 = *piVar14;
    *piVar14 = iVar13 + 1;
    if (param_1[0x236] != 0) {
      fVar15 = (float)VectorUnsignedToFloat(iVar13 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x236],1,fVar15);
    }
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    func_00266FF8((int)param_1);
    func_004F48F0((int)param_1);
    func_00268AE4((int)param_1);
    bVar1 = 0 < param_1[0x2ca];
    pfVar12 = DAT_00269e48;
    if (bVar1) {
      pfVar12 = DAT_00269e4c;
    }
    func_0053A554((int)param_1,afStack_28,pfVar12);
    func_004F8864((int)param_1,afStack_28,0,DAT_00269e50);
    if ((param_1[0x2d9] < 1) && (param_1[0x2de] < 1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    pfVar12 = DAT_00269e54;
    if (bVar1 && !bVar4) {
      pfVar12 = DAT_00269e58;
    }
    func_0053A554((int)param_1,afStack_28,pfVar12);
    fVar15 = fRam00269e5c;
    if (bVar1 && !bVar4) {
      fVar15 = DAT_00269e60;
    }
    func_004F8864((int)param_1,afStack_28,1,fVar15);
    func_004F5588((int)param_1);
    func_0053A554((int)param_1,&local_40,(float *)(param_1 + 0x2e2));
    param_1[0x159] = (int)ALBW_AS_U32(local_40);
    param_1[0x15a] = iStack_3c;
    param_1[0x15b] = (int)pfStack_38;
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfStack_38);
    uVar9 = 0;
    piVar14 = param_1 + 0x23b;
    pfVar12 = pfStack_38;
    do {
      piVar6 = piVar14;
      if (uVar9 < 2) {
        piVar6 = piVar14 + uVar9;
      }
      if (*piVar6 != 0) {
        piVar6 = piVar14;
        if (uVar9 < 2) {
          piVar6 = piVar14 + uVar9;
        }
        pfVar12 = (float *)0x0;
        func_0026171C(*piVar6,(float *)0x0,(uint *)0x0,(float *)0x0);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 2);
    pfVar11 = (float *)(param_1 + 0xf4);
    iVar13 = *(int *)(param_1[0x23d] + 0x18);
    *(uint *)(iVar13 + 0x164) = *(uint *)(iVar13 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar13 + 0x80),param_1[0xfa],pfVar11);
    func_00222A80(param_1[0x23d],extraout_r1,pfVar11,(int *)pfVar12);
  }
  return;
}

