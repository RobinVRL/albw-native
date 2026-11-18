#include "ghidra_types.h"

extern int func_0036143C(int param_1);
extern int func_004A3700(int param_1);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern float DAT_00353814;
extern int DAT_00353818;
extern undefined4 DAT_0035381c;
extern float DAT_00353820;
extern int *DAT_0036c434;

// USA 00353714 <- EU 003536F0 (Ghidra, non-matching)
// GLOBAL DAT_00353814 float
// GLOBAL DAT_00353818 int
// GLOBAL DAT_0035381c undefined4
// GLOBAL DAT_00353820 float
// GLOBAL DAT_0036c434 int *

undefined4 func_00353714(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fparam_0;
  float fparam_0_00;
  
  fparam_0 = DAT_00353814;
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xa90);
  *(float *)(param_1 + 0x9dc) = fparam_0;
  iVar2 = DAT_00353818;
  *(float *)(param_1 + 0x3dc) = fparam_0;
  *(float *)(param_1 + 0x3e0) = fparam_0;
  *(float *)(param_1 + 0x3e4) = fparam_0;
  *(undefined2 *)(iVar2 + param_1) = 0;
  iVar2 = *(int *)(param_1 + 0xa80);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xa84))) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar2);
  }
  uVar1 = DAT_0035381c;
  *(undefined4 *)(param_1 + 0xa20) = 0x3c;
  *(undefined4 *)(param_1 + 0xa24) = uVar1;
  *(undefined4 *)(param_1 + 0xa1c) = 0;
  fparam_0_00 = DAT_00353820;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b;
  func_004FABDC(param_1,0xb,0xffffffff,0);
  func_004FAB60(param_1,1,0);
  func_004FB070(param_1,fparam_0);
  func_004FB4C4(param_1,fparam_0_00);
  if (*(char *)(param_1 + 0x650) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5a8);
  }
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x90000;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x200;
  *(undefined1 *)(param_1 + 0x9bc) = 0;
  if (*(int *)(param_1 + 0x9b4) == 0) {
    *(undefined4 *)(param_1 + 0x9b4) = 1;
    if (*DAT_0036c434 != 0) {
      return func_0036143C(*DAT_0036c434);
    }
  }
  return 0;
}

