#include "ghidra_types.h"

extern undefined4 *DAT_0055a2c4;
extern undefined4 *DAT_0055a2c8;
extern int DAT_0055a2cc;

// USA 0055A288 <- EU 0055A260 (Ghidra, non-matching)
// GLOBAL DAT_0055a2c4 undefined4 *
// GLOBAL DAT_0055a2c8 undefined4 *
// GLOBAL DAT_0055a2cc int

void func_0055A288(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  puVar4 = DAT_0055a2c4;
  if (*(char *)(param_1 + 0x18) == '\0') {
    puVar4 = DAT_0055a2c8;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  *(undefined4 *)(param_2 + 0x2418) = *puVar4;
  *(undefined4 *)(param_2 + 0x241c) = uVar5;
  *(undefined4 *)(param_2 + 0x2420) = uVar6;
  *(undefined4 *)(param_2 + 0x2424) = uVar7;
  *(undefined1 *)(DAT_0055a2cc + param_2) = 1;
  *(int *)(param_2 + 0x2404) = iVar2;
  iVar2 = iVar2 + iVar3;
  *(int *)(param_2 + 0x2408) = iVar2;
  *(int *)(param_2 + 0x240c) = iVar1 + iVar2;
  *(undefined4 *)(param_2 + 0x2410) = 0;
  return;
}

