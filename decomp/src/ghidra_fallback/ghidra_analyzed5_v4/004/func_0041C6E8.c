#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004195B4(undefined4 *param_1);
extern int DAT_0041c7ac;
extern undefined *DAT_0041c7b0;
extern undefined *DAT_0041c7b4;
extern undefined *DAT_0041c7b8;

// USA 0041C6E8 <- EU 0041C6C8 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_0041c7ac int
// GLOBAL DAT_0041c7b0 undefined *
// GLOBAL DAT_0041c7b4 undefined *
// GLOBAL DAT_0041c7b8 undefined *

int func_0041C6E8(undefined4 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = func_004195B4(param_1);
  iVar3 = DAT_0041c7ac;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0;
  piVar2[0x15] = 0;
  piVar2[0x11] = iVar3 + 0x34;
  piVar2[0x14] = iVar3 + 0x48;
  *piVar2 = iVar3;
  piVar2[0x16] = 0;
  *(undefined2 *)((int)piVar2 + 0x7a) = 0;
  *(undefined2 *)(piVar2 + 0x1f) = 0;
  *(undefined1 *)(piVar2 + 0x1e) = 0x7f;
  *(undefined1 *)((int)piVar2 + 0x79) = 0x7f;
  iVar3 = func_00100118((int)(piVar2 + 0x3d),DAT_0041c7b0,0x10,4);
  iVar3 = func_00100118(iVar3 + 0x40,DAT_0041c7b4,0xc,4);
  *(undefined1 *)(iVar3 + 0x31) = 0;
  *(undefined1 *)(iVar3 + 0x32) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  puVar1 = DAT_0041c7b8;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  iVar3 = func_00100118(iVar3 + 0x5c,puVar1,8,4);
  iVar5 = 0;
  iVar3 = iVar3 + -400;
  iVar4 = 0;
  do {
    iVar6 = iVar5 + 1;
    iVar4 = iVar4 + 2;
    *(undefined4 *)(iVar3 + iVar5 * 4 + 0x90) = 0;
    iVar5 = iVar5 + 2;
    *(undefined4 *)(iVar3 + iVar6 * 4 + 0x90) = 0;
  } while (iVar4 < 0x10);
  return iVar3;
}

