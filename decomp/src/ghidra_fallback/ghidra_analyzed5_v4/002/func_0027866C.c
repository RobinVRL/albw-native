#include "ghidra_types.h"

extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001B9D54(int param_1,float *param_2,float *param_3,undefined4 *param_4);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FA8(int param_1,int *param_2);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int *DAT_00278b3c;
extern int *DAT_00278b40;
extern float DAT_00278b44;
extern float DAT_00278b48;
extern int *DAT_00278c04;

// USA 0027866C <- EU 00278694 (Ghidra, non-matching)
// GLOBAL DAT_00278b3c int *
// GLOBAL DAT_00278b40 int *
// GLOBAL DAT_00278b44 float
// GLOBAL DAT_00278b48 float
// GLOBAL DAT_00278c04 int *

void func_0027866C(int *param_1,int param_2,float *param_3,float *param_4)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  int extraout_r1_11;
  int extraout_r1_12;
  int extraout_r1_13;
  undefined4 extraout_r1_14;
  uint uVar8;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int * *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(int *)(albw_frame + 0x14))
  #define afStack_48 ((float *)(albw_frame + 0x18))
  #define afStack_3c ((float *)(albw_frame + 0x24))
  piVar3 = DAT_00278b3c;
  local_58 = param_1 + 0x103;
  if (*(int *)param_1[0x105] == 0) goto LAB_00278afc;
  if ((char)param_1[0x106] == '\0') {
    (**(code **)(*param_1 + 0x4c))(param_1);
  }
  else if ((char)param_1[0x106] == '\x01') {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  func_0053B0D0((int *)param_1[0x105],afStack_48,afStack_3c,&local_54);
  param_4 = &local_54;
  param_3 = afStack_3c;
  func_001B9D54((int)param_1,afStack_48,param_3,param_4);
  sVar5 = (short)*(char *)(param_1[0x105] + 0x38);
  if ((int)(short)param_1[0x124] != (int)*(char *)(param_1[0x105] + 0x38)) {
    param_3 = (float *)(uint)*(ushort *)((int)param_1 + 0x492);
    if (param_3 == (float *)0x0) {
      *(short *)(*(int *)(*DAT_00278b40 + 0x3dbe4) + 0x30) = sVar5;
    }
    else {
      *(short *)(*(int *)(*DAT_00278b40 + 0x3dbe4) + 0x32) = sVar5;
    }
    *(short *)(param_1 + 0x12d) = (short)param_1[0x124];
  }
  *(short *)(param_1 + 0x124) = sVar5;
  fparam_0 = DAT_00278b48;
  fparam_1 = DAT_00278b44;
  iVar6 = param_1[0x105];
  cVar1 = *(char *)(iVar6 + 0x68);
  if (cVar1 != '\x01' && cVar1 != '\x02') {
    iVar6 = (int)*(char *)(iVar6 + 0x39);
  }
  param_2 = (int)(char)param_1[0x12a];
  if (cVar1 == '\x01' || cVar1 == '\x02') {
    iVar6 = 1;
  }
  if (param_2 != iVar6) {
    *(char *)(param_1 + 0x12a) = (char)iVar6;
    if (iVar6 == 0) {
      if (param_1[0x125] != 0) {
        param_3 = (float *)0x0;
        func_004CF478(param_1[0x125],0);
        param_2 = extraout_r1_02;
      }
    }
    else {
      *(undefined2 *)((int)param_1 + 0x4b6) = 0x5b;
      if (param_1[0x125] != 0) {
        param_3 = (float *)0x0;
        func_004CF478(param_1[0x125],1);
        param_2 = extraout_r1;
      }
      if (param_1[0x128] != 0) {
        func_00168D60(param_1[0x128],fparam_0,fparam_1);
        param_2 = extraout_r1_00;
      }
      if (param_1[0x127] != 0) {
        func_00168D60(param_1[0x127],fparam_0,fparam_1);
        param_2 = extraout_r1_01;
      }
    }
  }
  if (*(short *)((int)param_1 + 0x4b6) < 1) {
    if (*(short *)((int)param_1 + 0x4b6) == 0) {
      *(undefined2 *)((int)param_1 + 0x4b6) = 0xffff;
      func_004CEA18(param_1[0x103],0,
                    (uint)*(byte *)((int)param_1 +
                                   (uint)*(byte *)((int)param_1 + 0x4b3) +
                                   (int)(short)param_1[0x12d] + 0x4ac));
      if ((*(char *)((int)param_1 + 0x4b3) == '\0') &&
         (bVar4 = func_005822A0(*piVar3,0x7e,3), bVar4)) {
        *(undefined1 *)((int)param_1 + 0x4b3) = 3;
      }
      param_3 = (float *)(uint)*(byte *)((int)param_1 +
                                        (uint)*(byte *)((int)param_1 + 0x4b3) +
                                        (int)(short)param_1[0x124] + 0x4ac);
      func_004CEA18(param_1[0x103],1,(uint)param_3);
      param_2 = extraout_r1_04;
    }
LAB_0027891c:
    if (*(short *)((int)param_1 + 0x4ba) < 1) goto LAB_00278928;
  }
  else {
    if (*(char *)((int)param_1 + 0x4b3) != '\0') {
LAB_00278894:
      *(short *)((int)param_1 + 0x4b6) = *(short *)((int)param_1 + 0x4b6) + -1;
      goto LAB_0027891c;
    }
    param_3 = (float *)0x3;
    bVar4 = func_005822A0(*piVar3,0x7e,3);
    param_2 = extraout_r1_03;
    if (!bVar4) goto LAB_00278894;
    sVar2 = *(short *)((int)param_1 + 0x4ba);
    sVar5 = sVar2;
    if (sVar2 < 1) {
      sVar5 = *(short *)((int)param_1 + 0x4b6);
    }
    if (0 < sVar2) {
      *(short *)((int)param_1 + 0x4ba) = sVar5 + -1;
      goto LAB_0027891c;
    }
    *(short *)((int)param_1 + 0x4b6) = sVar5 + -1;
LAB_00278928:
    sVar5 = (short)param_1[0x12e];
    if (sVar5 < 1) {
      if (sVar5 == 0) {
        if (param_1[0x125] != 0) {
          param_3 = (float *)0x0;
          func_004CF478(param_1[0x125],0);
          param_2 = extraout_r1_07;
        }
        *(short *)(param_1 + 0x12e) = (short)param_1[0x12e] + -1;
      }
    }
    else {
      *(short *)(param_1 + 0x12e) = sVar5 + -1;
      if ((int *)param_1[0x128] != (int *)0x0) {
        func_00169A80((int *)param_1[0x128],param_2,param_3,(int *)param_4);
        param_3 = (float *)0x0;
        func_00168E9C((int *)param_1[0x128],param_1[0x125],(int *)0x0);
        param_2 = extraout_r1_05;
      }
      if ((int *)param_1[0x127] != (int *)0x0) {
        func_00169A80((int *)param_1[0x127],param_2,param_3,(int *)param_4);
        param_3 = (float *)0x0;
        func_00168E9C((int *)param_1[0x127],param_1[0x103],(int *)0x0);
        param_2 = extraout_r1_06;
      }
    }
  }
  if ((char)param_1[0x12a] != '\0') {
    piVar7 = (int *)0x0;
    if (param_1[0x125] != 0) {
      piVar7 = (int *)param_1[0x128];
    }
    if (param_1[0x125] != 0 && piVar7 != (int *)0x0) {
      func_00169A80(piVar7,param_2,param_3,(int *)param_4);
      param_3 = (float *)0x0;
      func_00168E9C((int *)param_1[0x128],param_1[0x125],(int *)0x0);
      iVar6 = param_1[0x125];
      *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
      *(float *)(iVar6 + 0x80) = fparam_1;
      *(float *)(iVar6 + 0x84) = fparam_0;
      *(float *)(iVar6 + 0x88) = fparam_0;
      *(float *)(iVar6 + 0x90) = fparam_0;
      *(float *)(iVar6 + 0x94) = fparam_1;
      *(float *)(iVar6 + 0x98) = fparam_0;
      *(float *)(iVar6 + 0xa0) = fparam_0;
      *(float *)(iVar6 + 0xa4) = fparam_0;
      *(float *)(iVar6 + 0xa8) = fparam_1;
      *(float *)(iVar6 + 0x8c) = local_54;
      *(undefined4 *)(iVar6 + 0x9c) = local_50;
      *(int *)(iVar6 + 0xac) = local_4c;
      func_004CEAF0(param_1[0x125]);
      param_2 = extraout_r1_08;
    }
    if ((int *)param_1[0x127] != (int *)0x0) {
      func_00169A80((int *)param_1[0x127],param_2,param_3,(int *)param_4);
      param_3 = (float *)0x0;
      func_00168E9C((int *)param_1[0x127],param_1[0x103],(int *)0x0);
      param_2 = extraout_r1_09;
    }
  }
  if (*(char *)((int)param_1 + 0x4b3) == '\0') {
    param_3 = (float *)0x3;
    bVar4 = func_005822A0(*piVar3,0x7e,3);
    param_2 = extraout_r1_10;
    if ((bVar4) && ((short)param_1[0x12e] < 0)) {
      param_2 = 0xb4;
      *(undefined2 *)((int)param_1 + 0x4b6) = 0x5a;
      param_3 = (float *)0x20;
      *(undefined2 *)(param_1 + 0x12e) = 0xb4;
      *(undefined2 *)((int)param_1 + 0x4ba) = 0x20;
      *(short *)(param_1 + 0x12d) = (short)param_1[0x124];
      if (param_1[0x125] != 0) {
        param_3 = (float *)0x0;
        func_004CF478(param_1[0x125],1);
        param_2 = extraout_r1_11;
      }
      if (param_1[0x128] != 0) {
        func_00168D60(param_1[0x128],fparam_0,fparam_1);
        param_2 = extraout_r1_12;
      }
      if (param_1[0x127] != 0) {
        func_00168D60(param_1[0x127],fparam_0,fparam_1);
        param_2 = extraout_r1_13;
      }
    }
  }
LAB_00278afc:
  if ((int *)param_1[0x126] != (int *)0x0) {
    func_00169A80((int *)param_1[0x126],param_2,param_3,(int *)param_4);
    func_00168E9C((int *)param_1[0x126],param_1[0x103],(int *)0x0);
  }
  if (*(char *)((int)param_1 + 0x4a9) == '\0') {
    bVar4 = func_005822A0(*piVar3,7,3);
    *(bool *)((int)param_1 + 0x4a9) = bVar4;
  }
  else if (param_1[0x129] != 0) {
    uVar8 = (uint)*(byte *)((int)param_1 + 0x4b2);
    func_004CEA18(param_1[0x103],1,uVar8);
    func_00169A80((int *)param_1[0x129],extraout_r1_14,uVar8,(int *)param_4);
    func_00168E9C((int *)param_1[0x129],*local_58,(int *)0x0);
  }
  func_004CEAF0(param_1[0x103]);
  piVar3 = DAT_00278c04;
  if ((char)param_1[0x11d] != '\0') {
    func_00520F54((int)param_1,(float *)&local_58,*(undefined4 *)(*DAT_00278c04 + 0x1c));
    local_4c = 0;
    func_00520FA8((int)param_1,&local_4c);
    func_003413DC(*piVar3,(float *)&local_58,&local_4c);
    *(undefined1 *)(param_1 + 0x11d) = 0;
  }
  return;
}

