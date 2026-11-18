#include "ghidra_types.h"

extern undefined4 DAT_002880a8;
extern undefined4 DAT_002880ac;
extern int DAT_002880b0;
extern undefined4 DAT_002880b4;

// USA 00288040 <- EU 00288068 (Ghidra, non-matching)
// GLOBAL DAT_002880a8 undefined4
// GLOBAL DAT_002880ac undefined4
// GLOBAL DAT_002880b0 int
// GLOBAL DAT_002880b4 undefined4

void func_00288040(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_002880b0;
  uVar1 = DAT_002880a8;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002880a8;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_002880ac;
  *(undefined2 *)(iVar2 + param_1) = 0;
  uVar1 = DAT_002880b4;
  *(undefined4 *)(param_1 + 0x538) = 3;
  *(undefined4 *)(param_1 + 0x53c) = uVar1;
  *(undefined4 *)(param_1 + 0x534) = 0;
  return;
}

