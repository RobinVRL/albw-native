#include "ghidra_types.h"

extern int func_004EE484(undefined4 *param_1);
extern undefined4 DAT_0030188c;
extern undefined4 *DAT_00301890;
extern undefined4 DAT_00301894;

// USA 00301834 <- EU 00301810 (Ghidra, non-matching)
// GLOBAL DAT_0030188c undefined4
// GLOBAL DAT_00301890 undefined4 *
// GLOBAL DAT_00301894 undefined4

undefined4 func_00301834(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  uVar1 = DAT_0030188c;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar3 = func_004EE484((undefined4 *)(param_1 + 0x48));
  uVar1 = DAT_00301894;
  puVar2 = DAT_00301890;
  uVar5 = *DAT_00301890;
  uVar6 = DAT_00301890[1];
  puVar4 = DAT_00301890 + 2;
  *(int *)(iVar3 + 0x68) = iVar3 + -0x48;
  *(undefined4 *)(iVar3 + 0x6c) = uVar5;
  *(undefined4 *)(iVar3 + 0x70) = uVar6;
  *(undefined4 *)(iVar3 + 100) = uVar1;
  uVar5 = *puVar4;
  uVar6 = puVar2[3];
  *(int *)(iVar3 + 0x78) = iVar3 + -0x48;
  *(undefined4 *)(iVar3 + 0x7c) = uVar5;
  *(undefined4 *)(iVar3 + 0x80) = uVar6;
  *(undefined4 *)(iVar3 + 0x74) = uVar1;
  return (undefined4)param_1;
}

