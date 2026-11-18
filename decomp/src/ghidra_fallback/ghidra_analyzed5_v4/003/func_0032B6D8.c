#include "ghidra_types.h"

extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0032b7a8;
extern int *DAT_0032b7ac;
extern int DAT_0032b7b0;

// USA 0032B6D8 <- EU 0032B6B4 (Ghidra, non-matching)
// GLOBAL DAT_0032b7a8 undefined4
// GLOBAL DAT_0032b7ac int *
// GLOBAL DAT_0032b7b0 int

void func_0032B6D8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_0032b7a8;
  *(undefined1 *)(param_1 + 0xc93) = 1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  piVar2 = DAT_0032b7ac;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined1 *)(param_1 + 0x960) = 1;
  *(undefined1 *)(param_1 + 0x961) = 1;
  *(undefined1 *)(param_1 + 0x964) = 0;
  iVar3 = func_004D80EC((float *)(param_1 + 0x8fc),*(float **)(*piVar2 + 0x1c),0);
  *(int *)(param_1 + 0x944) = iVar3;
  if (*(char *)(param_1 + 0x962) == '\0') {
    *(int *)(param_1 + 0x944) = iVar3 + -0x80000000;
  }
  iVar3 = DAT_0032b7b0;
  *(int *)(param_1 + 0x944) = *(int *)(param_1 + 0x944) + DAT_0032b7b0;
  *(undefined1 *)(*(int *)(param_1 + 0x96c) + 0x61) = 0;
  *(undefined1 *)(param_1 + 0xa38) = 1;
  *(undefined1 *)(param_1 + 0xa39) = 1;
  *(undefined1 *)(param_1 + 0xa3c) = 0;
  iVar4 = func_004D80EC((float *)(param_1 + 0x9d4),*(float **)(*piVar2 + 0x1c),0);
  *(int *)(param_1 + 0xa1c) = iVar4;
  if (*(char *)(param_1 + 0xa3a) == '\0') {
    *(int *)(param_1 + 0xa1c) = iVar4 + -0x80000000;
  }
  *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + iVar3;
  *(undefined1 *)(*(int *)(param_1 + 0xa44) + 0x61) = 0;
  func_004FC07C(param_1,0xf,0x10,0);
  *(undefined4 *)(param_1 + 0xc84) = 0xf;
  return;
}

