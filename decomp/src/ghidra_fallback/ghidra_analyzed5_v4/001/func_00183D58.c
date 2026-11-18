#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00183CCC(int param_1);
extern int func_001846B0(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,float fparam_0);
extern int func_004BD784(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_004C1088(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00583B1C(int param_1);
extern int func_00611198(int param_1,int param_2,undefined1 param_3);
extern int func_0068C690(float *param_1);
extern float DAT_00183ff8;
extern int DAT_00183ffc;
extern uint DAT_00184000;
extern float DAT_00184004;
extern float DAT_00184008;
extern float DAT_0018400c;
extern undefined4 DAT_00184010;
extern float DAT_00184014;
extern int DAT_00184018;
extern int DAT_0018401c;
extern float DAT_00184020;

// USA 00183D58 <- EU 00183D58 (Ghidra, non-matching)
// GLOBAL DAT_00183ff8 float
// GLOBAL DAT_00183ffc int
// GLOBAL DAT_00184000 uint
// GLOBAL DAT_00184004 float
// GLOBAL DAT_00184008 float
// GLOBAL DAT_0018400c float
// GLOBAL DAT_00184010 undefined4
// GLOBAL DAT_00184014 float
// GLOBAL DAT_00184018 int
// GLOBAL DAT_0018401c int
// GLOBAL DAT_00184020 float

undefined4 func_00183D58(int *param_1)

{
  ushort uVar1;
  float *pfVar2;
  int iVar3;
  uint extraout_r1;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define fStack_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define fStack_20 (*(float *)(albw_frame + 0x20))
  uVar1 = (ushort)*(byte *)((int)param_1 + 0x852);
  bVar5 = uVar1 == 5;
  if (bVar5) {
    uVar1 = *(ushort *)((int)param_1 + 0x9f2);
  }
  if (bVar5 && uVar1 == 0) {
    if ((short)param_1[0x270] == 0) {
      return 0;
    }
    *(short *)(param_1 + 0x270) = (short)param_1[0x270] + -1;
  }
  func_00183CCC((int)param_1);
  pfVar2 = (float *)func_00520FC0();
  fVar6 = DAT_00183ff8;
  local_40 = *pfVar2;
  fStack_3c = pfVar2[1];
  local_38 = pfVar2[2];
  if (*(short *)((int)param_1 + 0x9f2) != 0) {
    *(short *)((int)param_1 + 0x9f2) = *(short *)((int)param_1 + 0x9f2) + -1;
    if (*(char *)((int)param_1 + 0x852) == '\x04') {
      func_00115C70(&local_28,&local_40,(float *)(param_1 + 0xf4));
      local_34 = local_28;
      local_30 = fStack_24;
      fStack_2c = fStack_20;
      iVar3 = func_0068C690(&local_34);
      func_0051D2F4(param_1 + 0xfa,iVar3,DAT_00183ffc >> 1,DAT_00183ffc,fVar6);
      iVar3 = func_00583B1C((int)param_1);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
      }
    }
    return 0;
  }
  if ((((*(char *)((int)param_1 + 0x9c7) != '\0') ||
       (fVar6 = fStack_3c - ALBW_AS_F32(param_1[0xf5]), (int)DAT_00184000 < (int)ALBW_AS_U32(fVar6))) ||
      (fVar4 = ALBW_AS_F32((DAT_00184000 | DAT_00184000 << 0x1d)), (uint)ALBW_AS_U32(fVar4) < (uint)ALBW_AS_U32(fVar6))) ||
     (fVar8 = DAT_00183ff8,
     bVar5 = func_001846B0((int)param_1,&local_40,ALBW_AS_U32(fVar6),(uint)ALBW_AS_U32(fVar4),DAT_00184004), bVar5)) {
    if (*(char *)((int)param_1 + 0x9f9) != '\b') {
      return func_00611198((int)param_1,9,0);
    }
  }
  else {
    iVar3 = func_004C1088((int)param_1,0x80000000,DAT_0018400c,DAT_00184008);
    if (iVar3 == 0) {
      pfVar2 = (float *)(param_1 + 0xf4);
      uVar7 = CONCAT44(fVar8,DAT_00184010);
      func_00115C70(&local_34,&local_40,pfVar2);
      fVar6 = SQRT(local_34 * local_34 + local_30 * local_30 + fStack_2c * fStack_2c);
      if (fVar6 <= ALBW_AS_F32(uVar7)) {
        *pfVar2 = local_40;
        param_1[0xf5] = (int)ALBW_AS_U32(fStack_3c);
        param_1[0xf6] = (int)ALBW_AS_U32(local_38);
      }
      else {
        fVar6 = DAT_00184014 / fVar6;
        local_34 = local_34 * fVar6;
        fStack_2c = fStack_2c * fVar6;
        local_30 = local_30 * fVar6;
        func_00115DAC(pfVar2,&local_34,pfVar2,ALBW_AS_F32(uVar7));
      }
      fVar6 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
      func_00115C70(&local_34,&local_40,(float *)(param_1 + 0xf4));
      local_28 = local_34;
      fStack_24 = local_30;
      fStack_20 = fStack_2c;
      iVar3 = func_0068C690(&local_28);
      func_0051D2F4(param_1 + 0xfa,iVar3,DAT_0018401c,DAT_00184018,fVar6);
      if (*(char *)((int)param_1 + 0x9c7) == '\0') {
        return 0;
      }
      return func_004BD784((int)param_1,extraout_r1,fVar6,DAT_00184020);
    }
  }
  *(undefined2 *)(param_1 + 0x270) = 0;
  return 0;
}

