#include "ghidra_types.h"

extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBFBC(int param_1,int param_2,int param_3);
extern int func_0058A1F4(int param_1);
extern float func_0058AC14(int param_1);
extern float DAT_002b430c;
extern float DAT_002b4310;

// USA 002B41D4 <- EU 002B41B0 (Ghidra, non-matching)
// GLOBAL DAT_002b430c float
// GLOBAL DAT_002b4310 float

void func_002B41D4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_r3;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = param_2 & 0xff;
  bVar4 = 0x1d < uVar1;
  bVar3 = uVar1 == 0x1e;
  if (!bVar3) {
    uVar1 = uVar1 - 0xe;
    bVar4 = 2 < uVar1;
  }
  fVar6 = DAT_002b4310;
  fVar7 = DAT_002b430c;
  if ((!bVar4 || (bVar3 || uVar1 == 3)) || (param_2 == 0x1d)) {
    in_r3 = (int *)0x0;
    if (*(short *)(param_1 + 0x508) < 1) {
      fVar5 = DAT_002b4310;
      func_004FABDC(param_1,9,0xffffffff,0);
      func_004FB4E0(param_1,fVar7);
      func_004FAB60(param_1,2,0);
      fVar6 = fVar5;
      func_004FB070(param_1,fVar5);
      func_004FB4C4(param_1,fVar7);
      if (*(int *)(param_1 + 0x958) != 0) {
        *(float *)(*(int *)(*(int *)(param_1 + 0x958) + 0x14) + 0x10) = fVar5;
      }
    }
    else {
      func_004FABDC(param_1,8,0xffffffff,0);
    }
    if (*(uint *)(param_1 + 0x94c) < *(uint *)(param_1 + 0x950)) {
      *(uint *)(param_1 + 0x94c) = *(uint *)(param_1 + 0x94c) + 1;
    }
  }
  if ((0 < *(short *)(param_1 + 0x508)) && (*(char *)(param_1 + 0x985) == '\0')) {
    uVar1 = func_0058A1F4(param_1);
    if (uVar1 == 0) {
      uVar2 = 0;
      func_004FBFBC(param_1,0,0);
      fVar5 = func_0058AC14(param_1);
      func_004FB070(param_1,fVar5 - fVar7);
      func_004FB4C4(param_1,fVar7);
      func_004FACD4(param_1,(int *)0x0,uVar2,in_r3);
    }
    if (*(int *)(param_1 + 0x958) != 0) {
      *(float *)(*(int *)(*(int *)(param_1 + 0x958) + 0x14) + 0x10) = fVar6;
    }
  }
  return;
}

