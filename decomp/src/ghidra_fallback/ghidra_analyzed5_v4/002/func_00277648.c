#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001B9D54(int param_1,float *param_2,float *param_3,undefined4 *param_4);
extern int func_0029081C(int param_1,float fparam_0);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FA8(int param_1,int *param_2);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int *DAT_002779d4;
extern int *DAT_002779d8;
extern float DAT_002779dc;
extern float DAT_002779e0;
extern int DAT_002779fc;
extern char s_SE_MiniDanSurface_MOVE_002779e4[];

// USA 00277648 <- EU 00277670 (Ghidra, non-matching)
// GLOBAL DAT_002779d4 int *
// GLOBAL DAT_002779d8 int *
// GLOBAL DAT_002779dc float
// GLOBAL DAT_002779e0 float
// GLOBAL DAT_002779fc int
// GLOBAL s_SE_MiniDanSurface_MOVE_002779e4 string

void func_00277648(int *param_1,int param_2,float *param_3,float *param_4)

{
  char cVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  bool bVar7;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(char * *)(albw_frame + 0x1c))
  #define afStack_4c ((float *)(albw_frame + 0x24))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  piVar2 = DAT_002779d4;
  if (*(int *)param_1[0x105] != 0) {
    if ((char)param_1[0x106] == '\0') {
      (**(code **)(*param_1 + 0x4c))(param_1);
    }
    else if ((char)param_1[0x106] == '\x01') {
      (**(code **)(*param_1 + 0x50))(param_1);
    }
    func_0053B0D0((int *)param_1[0x105],afStack_4c,afStack_40,&local_68);
    param_4 = &local_68;
    param_3 = afStack_40;
    func_001B9D54((int)param_1,afStack_4c,param_3,param_4);
    if (*(char *)((int)param_1 + 0x4aa) != '\0') {
      if (*(float *)(*(int *)(*piVar2 + 0x1c) + 4) < ALBW_AS_F32(param_1[0xf5])) {
        func_0029081C(*piVar2,ALBW_AS_F32(param_1[0xf5]));
      }
    }
    sVar3 = (short)*(char *)(param_1[0x105] + 0x38);
    if ((int)(short)param_1[0x124] != (int)*(char *)(param_1[0x105] + 0x38)) {
      param_3 = (float *)(uint)*(ushort *)((int)param_1 + 0x492);
      if (param_3 == (float *)0x0) {
        *(short *)(*(int *)(*DAT_002779d8 + 0x3dbe4) + 0x30) = sVar3;
      }
      else {
        *(short *)(*(int *)(*DAT_002779d8 + 0x3dbe4) + 0x32) = sVar3;
      }
      *(short *)(param_1 + 0x12d) = (short)param_1[0x124];
    }
    *(short *)(param_1 + 0x124) = sVar3;
    fparam_0 = DAT_002779e0;
    fparam_1 = DAT_002779dc;
    iVar4 = param_1[0x105];
    cVar1 = *(char *)(iVar4 + 0x68);
    if (cVar1 != '\x01' && cVar1 != '\x02') {
      iVar4 = (int)*(char *)(iVar4 + 0x39);
    }
    param_2 = (int)(char)param_1[0x12a];
    if (cVar1 == '\x01' || cVar1 == '\x02') {
      iVar4 = 1;
    }
    if (param_2 != iVar4) {
      *(char *)(param_1 + 0x12a) = (char)iVar4;
      iVar5 = param_1[0x125];
      if (iVar4 == 0) {
        if (iVar5 != 0) {
          param_3 = (float *)0x0;
          func_004CF478(iVar5,0);
          param_2 = extraout_r1_02;
        }
      }
      else {
        if (iVar5 != 0) {
          param_3 = (float *)0x0;
          func_004CF478(iVar5,1);
          param_2 = extraout_r1;
        }
        *(undefined2 *)((int)param_1 + 0x4b6) = 0x5b;
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
    sVar3 = *(short *)((int)param_1 + 0x4b6);
    bVar7 = sVar3 == 0;
    if (0 < sVar3) {
      sVar3 = sVar3 + -1;
      *(short *)((int)param_1 + 0x4b6) = sVar3;
    }
    if (bVar7) {
      *(short *)((int)param_1 + 0x4b6) = sVar3 + -1;
      func_004CEA18(param_1[0x103],0,(uint)*(byte *)((int)param_1 + (short)param_1[0x12d] + 0x4ac));
      param_3 = (float *)(uint)*(byte *)((int)param_1 + (short)param_1[0x124] + 0x4ac);
      func_004CEA18(param_1[0x103],1,(uint)param_3);
      param_2 = extraout_r1_03;
    }
    if ((char)param_1[0x12a] != '\0') {
      piVar6 = (int *)0x0;
      if (param_1[0x125] != 0) {
        piVar6 = (int *)param_1[0x128];
      }
      if (param_1[0x125] != 0 && piVar6 != (int *)0x0) {
        func_00169A80(piVar6,param_2,param_3,(int *)param_4);
        param_3 = (float *)0x0;
        func_00168E9C((int *)param_1[0x128],param_1[0x125],(int *)0x0);
        iVar4 = param_1[0x125];
        *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
        *(float *)(iVar4 + 0x80) = fparam_1;
        *(float *)(iVar4 + 0x84) = fparam_0;
        *(float *)(iVar4 + 0x88) = fparam_0;
        *(float *)(iVar4 + 0x90) = fparam_0;
        *(float *)(iVar4 + 0x94) = fparam_1;
        *(float *)(iVar4 + 0x98) = fparam_0;
        *(float *)(iVar4 + 0xa0) = fparam_0;
        *(float *)(iVar4 + 0xa4) = fparam_0;
        *(float *)(iVar4 + 0xa8) = fparam_1;
        *(float *)(iVar4 + 0x8c) = local_68;
        *(int *)(iVar4 + 0x9c) = local_64;
        *(undefined4 *)(iVar4 + 0xac) = local_60;
        func_004CEAF0(param_1[0x125]);
        param_2 = extraout_r1_04;
      }
      if ((int *)param_1[0x127] != (int *)0x0) {
        func_00169A80((int *)param_1[0x127],param_2,param_3,(int *)param_4);
        param_3 = (float *)0x0;
        func_00168E9C((int *)param_1[0x127],param_1[0x103],(int *)0x0);
        param_2 = extraout_r1_05;
      }
      if (*(char *)((int)param_1 + 0x4aa) != '\0') {
        local_54 = s_SE_MiniDanSurface_MOVE_002779e4;
        local_58 = DAT_002779fc;
        param_3 = (float *)0x0;
        func_001507D8((int)param_1,&local_58,0);
        param_2 = extraout_r1_06;
      }
    }
  }
  if ((int *)param_1[0x126] != (int *)0x0) {
    func_00169A80((int *)param_1[0x126],param_2,param_3,(int *)param_4);
    func_00168E9C((int *)param_1[0x126],param_1[0x103],(int *)0x0);
  }
  func_004CEAF0(param_1[0x103]);
  if ((char)param_1[0x11d] != '\0') {
    func_00520F54((int)param_1,afStack_70,*(undefined4 *)(*piVar2 + 0x1c));
    local_64 = 0;
    func_00520FA8((int)param_1,&local_64);
    func_003413DC(*piVar2,afStack_70,&local_64);
    *(undefined1 *)(param_1 + 0x11d) = 0;
  }
  return;
}

