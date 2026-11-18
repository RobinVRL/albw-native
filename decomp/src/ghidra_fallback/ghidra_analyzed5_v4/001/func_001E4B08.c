#include "ghidra_types.h"

extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_0037C4E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_001e4bb0;
extern undefined4 DAT_001e4bb4;
extern undefined4 DAT_001e4bb8;

// USA 001E4B08 <- EU 001E4B08 (Ghidra, non-matching)
// GLOBAL DAT_001e4bb0 int *
// GLOBAL DAT_001e4bb4 undefined4
// GLOBAL DAT_001e4bb8 undefined4

int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = (int *)func_00324A30(param_1,param_2);
  piVar5 = DAT_001e4bb0;
  piVar3[200] = (int)(DAT_001e4bb0 + 0x1e);
  *piVar3 = (int)piVar5;
  piVar3[0x11e] = 0;
  if (param_3 != 0) {
    piVar5 = piVar3 + 0xf7;
  }
  piVar3[0x11f] = 0;
  if (param_3 == 0) {
    piVar5 = (int *)0x0;
  }
  iVar4 = func_0037C4E0(piVar3 + 0x120,piVar3 + 0xf4,piVar5);
  *(undefined1 *)(iVar4 + 0x4c) = 4;
  uVar2 = DAT_001e4bb8;
  uVar1 = DAT_001e4bb4;
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar4 + -0xb0);
  *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar4 + -0xac);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar4 + -0xa8);
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  *(undefined4 *)(iVar4 + 0x60) = uVar2;
  *(undefined4 *)(iVar4 + 100) = 0x12;
  *(undefined4 *)(iVar4 + 0x68) = uVar1;
  *(undefined4 *)(iVar4 + 0x6c) = uVar1;
  *(undefined1 *)(iVar4 + 0x70) = 1;
  *(undefined1 *)(iVar4 + 0x71) = 0;
  *(undefined1 *)(iVar4 + 0x72) = 1;
  *(byte *)(iVar4 + -0xe9) = *(byte *)(iVar4 + -0xe9) | 1;
  *(undefined1 *)(iVar4 + -0xb2) = 1;
  return iVar4 + -0x480;
}

