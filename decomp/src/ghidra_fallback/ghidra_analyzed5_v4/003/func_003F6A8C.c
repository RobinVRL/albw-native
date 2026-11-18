#include "ghidra_types.h"

extern int *DAT_003f6b1c;

// USA 003F6A8C <- EU 003F6A6C (Ghidra, non-matching)
// GLOBAL DAT_003f6b1c int *

void func_003F6A8C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  piVar1 = DAT_003f6b1c;
  puVar6 = *(undefined4 **)(param_1 + 0x130);
  iVar3 = *DAT_003f6b1c;
  *(undefined4 *)(iVar3 + 0x7c) = puVar6[3];
  iVar4 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(iVar3 + 0x80) = puVar6[2];
  *(undefined4 *)(iVar3 + 0x84) = puVar6[1];
  iVar5 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(iVar3 + 0x88) = *puVar6;
  iVar2 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(iVar3 + 0x8c) = puVar6[7];
  *(undefined4 *)(iVar3 + 0x90) = puVar6[6];
  *(undefined4 *)(iVar3 + 0x94) = puVar6[5];
  *(undefined4 *)(iVar3 + 0x98) = puVar6[4];
  *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(iVar4 + 0x28);
  *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(iVar3 + 0xa8) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar3 + 0xac) = 0;
  *piVar1 = iVar3 + 0xb0;
  return;
}

