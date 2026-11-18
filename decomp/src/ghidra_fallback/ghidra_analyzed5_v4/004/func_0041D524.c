#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0040E568(undefined1 *param_1);
extern int func_0041C81C(void);
extern int func_0041C870(int *param_1,int param_2);
extern undefined *DAT_0041d594;
extern undefined4 DAT_0041d598;
extern undefined *DAT_0041d59c;

// USA 0041D524 <- EU 0041D504 (Ghidra, non-matching)
// GLOBAL DAT_0041d594 undefined *
// GLOBAL DAT_0041d598 undefined4
// GLOBAL DAT_0041d59c undefined *

int func_0041D524(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  iVar1 = func_00100118(param_1,DAT_0041d594,0x18,4);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x80) = DAT_0041d598;
  *(int *)(iVar1 + 0x8c) = iVar1;
  puVar2 = func_0040E568((undefined1 *)(iVar1 + 0x90));
  iVar1 = func_00100118((int)(puVar2 + 0x1c),DAT_0041d59c,0x20,4);
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined1 *)(iVar1 + 0x85) = 0;
  *(undefined1 *)(iVar1 + 0x86) = 0;
  *(undefined1 *)(iVar1 + 0xd0) = 0;
  *(undefined1 *)(iVar1 + 0xd1) = 0;
  *(undefined2 *)(iVar1 + 0xd2) = 0;
  *(undefined2 *)(iVar1 + 0xd4) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  piVar3 = func_0041C81C();
  func_0041C870(piVar3,iVar1 + -0x2c);
  return iVar1 + -0xac;
}

