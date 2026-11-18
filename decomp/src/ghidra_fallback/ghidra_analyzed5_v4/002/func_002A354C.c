#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_0036C42C(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB4C4(int param_1,float fparam_0);
extern float fRam002a3608;
extern undefined4 uRam002a360c;
extern undefined4 *puRam002a3610;
extern undefined4 *puRam002a3614;
extern float *DAT_002a3604;

// USA 002A354C <- EU 002A3528 (Ghidra, non-matching)
// GLOBAL DAT_002a3604 float *
// GLOBAL UNK_002a3608 float
// GLOBAL UNK_002a360c undefined4
// GLOBAL UNK_002a3610 undefined4 *
// GLOBAL UNK_002a3614 undefined4 *

void func_002A354C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float fparam_0;
  
  func_00115C54((float *)(param_1 + 0xa84),(float *)(param_1 + 0x3d0),DAT_002a3604);
  *(undefined1 *)(param_1 + 0x9c8) = 2;
  piVar4 = (int *)0x0;
  uVar3 = 0;
  *(float **)(param_1 + 0x8fc) = (float *)(param_1 + 0xa84);
  func_004FABDC(param_1,0x1c,0,0);
  uVar1 = uRam002a360c;
  fparam_0 = fRam002a3608;
  *(float *)(param_1 + 0xb28) = fRam002a3608;
  *(undefined4 *)(param_1 + 0xb24) = uVar1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined1 *)(param_1 + 0xb9b) = 1;
  iVar2 = param_1 + 0x8d4;
  func_0036C42C(iVar2);
  func_0036C2B8(iVar2,*puRam002a3610);
  func_0036C2B8(iVar2,*puRam002a3614);
  func_004FB4C4(param_1,fparam_0);
  func_004FACD4(param_1,(int *)0x0,uVar3,piVar4);
  if (*(char *)(param_1 + 0x650) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5a8);
  }
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x90000;
  return;
}

