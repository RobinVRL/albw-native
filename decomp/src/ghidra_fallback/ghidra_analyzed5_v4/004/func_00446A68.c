#include "ghidra_types.h"

extern int func_0044A374(int param_1,float *param_2);
extern int func_004557A0(int param_1,int param_2);
extern int func_00456284(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,float fparam_0, float fparam_1);
extern int func_0048C258(int *param_1,undefined *param_2);
extern int func_004B96F0(int param_1);
extern int func_004B989C(int param_1);
extern undefined *DAT_00446b24;

// USA 00446A68 <- EU 00446A40 (Ghidra, non-matching)
// GLOBAL DAT_00446b24 undefined *

undefined4 func_00446A68(int param_1,float *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int iVar4;
  int in_r3;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x1b4);
  piVar2 = piVar5 + *(int *)(param_1 + 0x1ac);
  while( true ) {
    if (piVar5 == piVar2) {
      return 0;
    }
    if (*(char *)(*piVar5 + 0x6c) == '\0') break;
    piVar5 = piVar5 + 1;
  }
  iVar4 = param_3;
  func_0044A374(param_1,param_2);
  func_00456284((int *)*piVar5,extraout_r1,iVar4,in_r3,*param_2,param_2[1]);
  func_004557A0(*piVar5,param_3);
  func_0048C258((int *)(param_1 + 0x1ac),DAT_00446b24);
  uVar3 = 0;
  do {
    if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
    }
    else {
      iVar4 = 0;
    }
    cVar1 = (char)uVar3;
    *(char *)(iVar4 + 0xf) = '\x15' - cVar1;
    if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
    }
    else {
      iVar4 = 0;
    }
    uVar3 = uVar3 + 1;
    *(char *)(*(int *)(iVar4 + 0x14) + 0x14) =
         (*(char *)(*(int *)(param_1 + 0x14) + 0x14) - cVar1) + -1;
  } while ((int)uVar3 < 0x14);
  func_004B989C(*(int *)(param_1 + 0x10));
  return func_004B96F0(*(int *)(param_1 + 0x10));
}

