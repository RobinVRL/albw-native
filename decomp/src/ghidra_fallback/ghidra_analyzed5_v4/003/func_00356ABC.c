#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00355C50(int param_1);
extern int func_004A3700(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern float func_004F944C(void);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern float DAT_00356d48;
extern float DAT_00356d4c;
extern float DAT_00356d50;
extern float DAT_00356d54;
extern float DAT_00356d58;

// USA 00356ABC <- EU 00356A98 (Ghidra, non-matching)
// GLOBAL DAT_00356d48 float
// GLOBAL DAT_00356d4c float
// GLOBAL DAT_00356d50 float
// GLOBAL DAT_00356d54 float
// GLOBAL DAT_00356d58 float

undefined4 func_00356ABC(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  sVar1 = (short)param_1[0x27a];
  if (sVar1 == 0) {
    lVar7 = func_0058ACC8((int)param_1,DAT_00356d48);
    if ((int)lVar7 != 0) {
      func_004D80A4((float *)(param_1 + 0xf7),param_1[0xfa],DAT_00356d4c);
      *(short *)(param_1 + 0x27a) = (short)param_1[0x27a] + 1;
    }
    func_0051D2CC(param_1 + 0xfa,param_1[0x296],DAT_00356d50);
  }
  else if (sVar1 == 1) {
    iVar2 = param_1[0x279];
    iVar4 = param_1[0x142];
    uVar6 = func_0058AB74((int)param_1);
    iVar3 = (int)uVar6;
    if ((iVar2 - (short)iVar4 < 0x5b) && ((uint)param_1[0x28a] < (uint)param_1[0x28b])) {
      param_1[0x28a] = param_1[0x28a] + 1;
      if (iVar3 == 7 || iVar3 == 10) {
        iVar4 = func_0058A8F0((int)param_1);
        if (iVar4 == 0) {
          if ((iVar3 == 7) && (lVar7 = func_0058ACC8((int)param_1,DAT_00356d54), (int)lVar7 != 0)) {
            param_1[0x167] = param_1[0x167] | 0x80;
          }
        }
        else {
          func_004FABDC((int)param_1,8,0xffffffff,0);
        }
      }
    }
    else {
      func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
      func_004FAD90((int)param_1);
      func_004F9554(param_1[0x10c],7,0,1);
      func_004F9554(param_1[0x10d],7,0,1);
      func_004FABDC((int)param_1,9,0xffffffff,0);
      if (((char)param_1[0x27c] == '\0') && ((short)param_1[0x142] < 0xf1)) {
        iVar4 = param_1[0x2a0];
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x2a1])) {
          *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xffffffbb | 8;
          func_004A3700(iVar4);
        }
        return func_00666318(param_1 + 0x297,10);
      }
      iVar4 = param_1[0x2a0];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x2a1])) {
        iVar2 = *(int *)(iVar4 + 0x20);
        if ((iVar2 != 0) &&
           ((*(int *)(iVar4 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
          *(undefined1 *)(iVar2 + 0x280) = 1;
        }
        *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xfffffffb | 8;
      }
      *(short *)(param_1 + 0x27a) = (short)param_1[0x27a] + 1;
    }
  }
  else if ((sVar1 == 2) && (iVar4 = func_0058A8F0((int)param_1), iVar4 != 0)) {
    return func_00666318(param_1 + 0x297,5);
  }
  func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),DAT_00356d58);
  if (ALBW_AS_F32(param_1[0xf5]) < ALBW_AS_F32(param_1[3])) {
    param_1[0xf5] = param_1[3];
    fVar5 = func_004F944C();
    param_1[0xf8] = (int)ALBW_AS_U32(fVar5);
  }
  return func_00355C50((int)param_1);
}

