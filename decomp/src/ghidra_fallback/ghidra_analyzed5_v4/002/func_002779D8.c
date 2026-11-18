#include "ghidra_types.h"

extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001B9D54(int param_1,float *param_2,float *param_3,undefined4 *param_4);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FA8(int param_1,int *param_2);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int func_006916F0(int *param_1,int *param_2);
extern float DAT_00277cf8;
extern float DAT_00277cfc;
extern int DAT_00277d00;
extern int *DAT_00277d0c;
extern char s_Hagure_00277d04[];

// USA 002779D8 <- EU 00277A00 (Ghidra, non-matching)
// GLOBAL DAT_00277cf8 float
// GLOBAL DAT_00277cfc float
// GLOBAL DAT_00277d00 int
// GLOBAL DAT_00277d0c int *
// GLOBAL s_Hagure_00277d04 string

void func_002779D8(int *param_1,int param_2,float *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  float *pfVar6;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(int *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define afStack_40 ((float *)(albw_frame + 0x20))
  #define afStack_34 ((float *)(albw_frame + 0x2c))
  pfVar6 = &local_58;
  if (*(int *)param_1[0x105] == 0) goto LAB_00277c28;
  if ((char)param_1[0x106] == '\0') {
    (**(code **)(*param_1 + 0x4c))(param_1);
  }
  else if ((char)param_1[0x106] == '\x01') {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  func_0053B0D0((int *)param_1[0x105],afStack_40,afStack_34,&local_58);
  param_3 = afStack_34;
  func_001B9D54((int)param_1,afStack_40,param_3,&local_58);
  fparam_0 = DAT_00277cfc;
  fparam_1 = DAT_00277cf8;
  iVar2 = param_1[0x105];
  *(short *)(param_1 + 0x124) = (short)*(char *)(iVar2 + 0x38);
  cVar1 = *(char *)(iVar2 + 0x68);
  if (cVar1 != '\x01' && cVar1 != '\x02') {
    iVar2 = (int)*(char *)(iVar2 + 0x39);
  }
  param_2 = (int)(char)param_1[0x12a];
  if (cVar1 == '\x01' || cVar1 == '\x02') {
    iVar2 = 1;
  }
  param_4 = (int *)pfVar6;
  if (param_2 != iVar2) {
    *(char *)(param_1 + 0x12a) = (char)iVar2;
    iVar4 = DAT_00277d00;
    iVar3 = param_1[0x125];
    if (iVar2 == 0) {
      if (iVar3 != 0) {
        param_3 = (float *)0x0;
        func_004CF478(iVar3,0);
        param_4 = (int *)pfVar6;
      }
      local_44 = s_Hagure_00277d04;
      local_48 = iVar4;
      iVar4 = func_006916F0((int *)param_1[0xb0],&local_48);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = param_1[0x103];
      }
      param_2 = extraout_r1_03;
      if (iVar4 != 0 && iVar2 != 0) {
        if (*(char *)((int)param_1 + 0x4a9) == '\0') goto LAB_00277b68;
LAB_00277b70:
        iVar4 = 0;
        goto LAB_00277b74;
      }
    }
    else {
      if (iVar3 != 0) {
        param_3 = (float *)0x0;
        func_004CF478(iVar3,1);
        param_4 = (int *)pfVar6;
      }
      if (param_1[0x128] != 0) {
        func_00168D60(param_1[0x128],fparam_0,fparam_1);
      }
      if (param_1[0x127] != 0) {
        func_00168D60(param_1[0x127],fparam_0,fparam_1);
      }
      local_44 = s_Hagure_00277d04;
      local_48 = iVar4;
      iVar4 = func_006916F0((int *)param_1[0xb0],&local_48);
      iVar2 = 1;
      if (iVar4 != 1) {
        iVar2 = param_1[0x103];
      }
      param_2 = extraout_r1;
      if (iVar4 != 1 && iVar2 != 0) {
        if (*(char *)((int)param_1 + 0x4a9) != '\0') goto LAB_00277b70;
LAB_00277b68:
        iVar4 = 1;
LAB_00277b74:
        param_3 = (float *)0x0;
        func_004CF478(iVar2,iVar4);
        param_2 = extraout_r1_00;
      }
    }
  }
  if ((char)param_1[0x12a] != '\0') {
    piVar5 = (int *)0x0;
    if (param_1[0x125] != 0) {
      piVar5 = (int *)param_1[0x128];
    }
    if (param_1[0x125] != 0 && piVar5 != (int *)0x0) {
      func_00169A80(piVar5,param_2,param_3,param_4);
      param_3 = (float *)0x0;
      func_00168E9C((int *)param_1[0x128],param_1[0x125],(int *)0x0);
      iVar2 = param_1[0x125];
      *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
      *(float *)(iVar2 + 0x80) = fparam_1;
      *(float *)(iVar2 + 0x84) = fparam_0;
      *(float *)(iVar2 + 0x88) = fparam_0;
      *(float *)(iVar2 + 0x90) = fparam_0;
      *(float *)(iVar2 + 0x94) = fparam_1;
      *(float *)(iVar2 + 0x98) = fparam_0;
      *(float *)(iVar2 + 0xa0) = fparam_0;
      *(float *)(iVar2 + 0xa4) = fparam_0;
      *(float *)(iVar2 + 0xa8) = fparam_1;
      *(float *)(iVar2 + 0x8c) = local_58;
      *(undefined4 *)(iVar2 + 0x9c) = local_54;
      *(undefined4 *)(iVar2 + 0xac) = local_50;
      func_004CEAF0(param_1[0x125]);
      param_2 = extraout_r1_01;
    }
    if ((int *)param_1[0x127] != (int *)0x0) {
      func_00169A80((int *)param_1[0x127],param_2,param_3,param_4);
      param_3 = (float *)0x0;
      func_00168E9C((int *)param_1[0x127],param_1[0x103],(int *)0x0);
      param_2 = extraout_r1_02;
    }
  }
LAB_00277c28:
  if ((int *)param_1[0x126] != (int *)0x0) {
    func_00169A80((int *)param_1[0x126],param_2,param_3,param_4);
    func_00168E9C((int *)param_1[0x126],param_1[0x103],(int *)0x0);
  }
  func_004CEAF0(param_1[0x103]);
  piVar5 = DAT_00277d0c;
  if ((char)param_1[0x11d] != '\0') {
    func_00520F54((int)param_1,&local_58,*(undefined4 *)(*DAT_00277d0c + 0x1c));
    local_4c = 0;
    func_00520FA8((int)param_1,&local_4c);
    func_003413DC(*piVar5,&local_58,&local_4c);
    *(undefined1 *)(param_1 + 0x11d) = 0;
  }
  return;
}

