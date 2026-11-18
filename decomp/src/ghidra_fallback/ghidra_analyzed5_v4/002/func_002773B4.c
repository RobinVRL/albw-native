#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001B9D54(int param_1,float *param_2,float *param_3,undefined4 *param_4);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FA8(int param_1,int *param_2);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern undefined4 DAT_00277664;
extern undefined4 DAT_00277668;
extern int *DAT_0027766c;

// USA 002773B4 <- EU 002773DC (Ghidra, non-matching)
// GLOBAL DAT_00277664 undefined4
// GLOBAL DAT_00277668 undefined4
// GLOBAL DAT_0027766c int *

void func_002773B4(int *param_1,int param_2,float *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  float *pfVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 ((float *)(albw_frame + 0xc))
  #define afStack_28 ((float *)(albw_frame + 0x18))
  pfVar8 = &local_40;
  if (*(int *)param_1[0x105] != 0) {
    if ((char)param_1[0x106] == '\0') {
      (**(code **)(*param_1 + 0x4c))(param_1);
    }
    else if ((char)param_1[0x106] == '\x01') {
      (**(code **)(*param_1 + 0x50))(param_1);
    }
    func_0053B0D0((int *)param_1[0x105],local_34,afStack_28,&local_40);
    param_3 = afStack_28;
    func_001B9D54((int)param_1,local_34,param_3,&local_40);
    iVar6 = param_1[0x105];
    cVar1 = *(char *)(iVar6 + 0x68);
    if (cVar1 != '\x01' && cVar1 != '\x02') {
      iVar6 = (int)*(char *)(iVar6 + 0x39);
    }
    param_2 = (int)(char)param_1[0x12a];
    if (cVar1 == '\x01' || cVar1 == '\x02') {
      iVar6 = 1;
    }
    param_4 = (int *)pfVar8;
    if (param_2 != iVar6) {
      *(char *)(param_1 + 0x12a) = (char)iVar6;
      iVar7 = param_1[0x103];
      if (iVar6 == 0) {
        if (iVar7 != 0) {
          param_3 = (float *)(uint)*(byte *)((int)param_1 + 0x4ad);
          func_004CEA18(iVar7,0,(uint)param_3);
          param_2 = extraout_r1_00;
          param_4 = (int *)pfVar8;
        }
      }
      else {
        if (iVar7 != 0) {
          param_3 = (float *)(uint)*(byte *)((int)param_1 + 0x4ad);
          func_004CEA18(iVar7,1,(uint)param_3);
          param_2 = extraout_r1;
        }
        *(undefined2 *)((int)param_1 + 0x4b6) = 0x5a;
        *(undefined1 *)(param_1[0x104] + 0x44) = 0;
        param_4 = (int *)pfVar8;
      }
    }
    sVar5 = *(short *)((int)param_1 + 0x4b6);
    bVar9 = sVar5 == 0;
    if (0 < sVar5) {
      sVar5 = sVar5 + -1;
      *(short *)((int)param_1 + 0x4b6) = sVar5;
    }
    if (bVar9) {
      *(short *)((int)param_1 + 0x4b6) = sVar5 + -1;
      if (param_1[0x103] != 0) {
        func_004CEA18(param_1[0x103],0,(uint)*(byte *)(param_1 + 299));
        param_3 = (float *)(uint)*(byte *)((int)param_1 + 0x4ae);
        func_004CEA18(param_1[0x103],1,(uint)param_3);
        param_2 = extraout_r1_01;
      }
    }
    uVar3 = DAT_00277668;
    uVar2 = DAT_00277664;
    if ((char)param_1[0x12a] != '\0') {
      iVar6 = param_1[0x103];
      if (iVar6 != 0) {
        param_2 = 0;
        if (param_1[0x127] != 0) {
          *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
          *(undefined4 *)(iVar6 + 0x80) = uVar2;
          *(undefined4 *)(iVar6 + 0x84) = uVar3;
          *(undefined4 *)(iVar6 + 0x88) = uVar3;
          *(undefined4 *)(iVar6 + 0x90) = uVar3;
          *(undefined4 *)(iVar6 + 0x94) = uVar2;
          *(undefined4 *)(iVar6 + 0x98) = uVar3;
          *(undefined4 *)(iVar6 + 0xa0) = uVar3;
          *(undefined4 *)(iVar6 + 0xa4) = uVar3;
          *(undefined4 *)(iVar6 + 0xa8) = uVar2;
          *(float *)(iVar6 + 0x8c) = local_40;
          *(undefined4 *)(iVar6 + 0x9c) = local_3c;
          *(undefined4 *)(iVar6 + 0xac) = local_38;
          func_00169A80((int *)param_1[0x127],local_38,param_3,param_4);
          param_3 = (float *)0x0;
          func_00168E9C((int *)param_1[0x127],param_1[0x103],(int *)0x0);
          param_2 = extraout_r1_02;
        }
      }
      if ((int *)param_1[0x128] != (int *)0x0) {
        func_00169A80((int *)param_1[0x128],param_2,param_3,param_4);
        param_3 = (float *)0x0;
        func_00168E9C((int *)param_1[0x128],param_1[0x103],(int *)0x0);
        param_2 = extraout_r1_03;
      }
    }
  }
  if ((int *)param_1[0x126] != (int *)0x0) {
    func_00169A80((int *)param_1[0x126],param_2,param_3,param_4);
    func_00168E9C((int *)param_1[0x126],param_1[0x103],(int *)0x0);
  }
  func_004CEAF0(param_1[0x103]);
  piVar4 = DAT_0027766c;
  if ((char)param_1[0x11d] != '\0') {
    func_00520F54((int)param_1,&local_40,*(undefined4 *)(*DAT_0027766c + 0x1c));
    local_34[0] = 0.0;
    func_00520FA8((int)param_1,(int *)local_34);
    func_003413DC(*piVar4,&local_40,(int *)local_34);
    *(undefined1 *)(param_1 + 0x11d) = 0;
  }
  return;
}

