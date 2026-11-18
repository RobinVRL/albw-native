#include "ghidra_types.h"

extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_0028F1FC(float fparam_0);
extern int func_0028F2B8(float fparam_0);
extern int func_002D57FC(int param_1,int param_2,float fparam_0);
extern float DAT_002d5588;
extern float DAT_002d558c;
extern float DAT_002d5590;
extern float DAT_002d5594;
extern float DAT_002d5598;
extern float DAT_002d559c;

// USA 002D5350 <- EU 002D532C (Ghidra, non-matching)
// GLOBAL DAT_002d5588 float
// GLOBAL DAT_002d558c float
// GLOBAL DAT_002d5590 float
// GLOBAL DAT_002d5594 float
// GLOBAL DAT_002d5598 float
// GLOBAL DAT_002d559c float

undefined4 func_002D5350(int param_1,int param_2,int param_3,float fparam_0)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  float fparam_0_00;
  float fVar6;
  
  fVar6 = DAT_002d558c;
  if (fparam_0 == DAT_002d5588) {
    param_3 = 0;
    fparam_0_00 = DAT_002d558c;
    if (param_2 == 0) {
      func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x3c),0,1,1,6);
    }
    func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x5c),0,1,1,6);
  }
  else {
    iVar2 = func_0028F1FC(fparam_0);
    if (iVar2 == 0) {
      iVar2 = func_0028F2B8(fparam_0);
      if (iVar2 == 0) {
        fparam_0_00 = fparam_0 * DAT_002d5598;
        param_3 = 5;
        if (param_2 == 0) {
          func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x3c),5,1,1,0xc);
        }
        func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x5c),5,1,1,0xc);
      }
      else {
        uVar3 = 6;
        fparam_0_00 = fparam_0 * DAT_002d5594;
        sVar1 = *(short *)(*(int *)(param_1 + 0x4c) + 0x52);
        if (sVar1 == 5 || sVar1 == 6) {
          uVar3 = 0xc;
        }
        if (param_2 == 0) {
          func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x3c),param_3,1,1,uVar3);
        }
        func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x5c),param_3,1,1,uVar3);
      }
    }
    else {
      param_3 = 10;
      fparam_0_00 = fparam_0 * DAT_002d5590;
      if (param_2 == 0) {
        func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x3c),10,1,1,6);
      }
      func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x5c),10,1,1,6);
    }
  }
  bVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4) != 0x3f800000;
  if (bVar4) {
    fVar5 = DAT_002d559c;
  }
  if (bVar4) {
    fparam_0_00 = fparam_0_00 * fVar5;
  }
  if (**(int **)(param_1 + 0x44) != 0) {
    func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x3c),0x59,1,1,6);
  }
  if (param_2 == 0) {
    if (**(int **)(param_1 + 0x44) == 0) {
      fVar6 = fparam_0_00;
    }
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fVar6);
  }
  func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fparam_0_00);
  return func_002D57FC(param_1,param_3,fparam_0_00);
}

