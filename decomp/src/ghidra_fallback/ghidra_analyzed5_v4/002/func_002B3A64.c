#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBFBC(int param_1,int param_2,int param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0058AC14(int param_1);
extern float fRam002b3b0c;
extern undefined4 uRam002b3b10;
extern float DAT_002b3b08;

// USA 002B3A64 <- EU 002B3A40 (Ghidra, non-matching)
// GLOBAL DAT_002b3b08 float
// GLOBAL UNK_002b3b0c float
// GLOBAL UNK_002b3b10 undefined4

void func_002B3A64(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  float fparam_0;
  float fparam_0_00;
  
  fparam_0_00 = DAT_002b3b08;
  *(float *)(param_1 + 0x3dc) = DAT_002b3b08;
  *(float *)(param_1 + 0x3e0) = fparam_0_00;
  *(float *)(param_1 + 0x3e4) = fparam_0_00;
  func_004FABDC(param_1,3,0xffffffff,0);
  func_004FB4E0(param_1,fRam002b3b0c);
  func_004FBFBC(param_1,0,0);
  fparam_0 = func_0058AC14(param_1);
  func_004FB070(param_1,fparam_0);
  func_004FB4C4(param_1,fparam_0_00);
  if (*(int *)(param_1 + 0x958) != 0) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x958) + 0x14) + 0x10) = fparam_0_00;
  }
  puVar2 = (undefined2 *)func_0054DDF4(param_1,1);
  func_004F88A0((int *)param_1,puVar2);
  *(undefined1 *)(param_1 + 0x985) = 0;
  uVar1 = uRam002b3b10;
  *(undefined1 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x938) = 2;
  *(undefined4 *)(param_1 + 0x93c) = uVar1;
  *(undefined4 *)(param_1 + 0x934) = 0;
  return;
}

