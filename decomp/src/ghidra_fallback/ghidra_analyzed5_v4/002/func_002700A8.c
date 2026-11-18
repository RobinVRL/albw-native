#include "ghidra_types.h"

extern undefined4 DAT_00270138;

// USA 002700A8 <- EU 002700D0 (Ghidra, non-matching)
// GLOBAL DAT_00270138 undefined4

void func_002700A8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(*(int **)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = DAT_00270138;
  iVar2 = *(int *)(param_1 + 0x10);
  cVar3 = *(char *)(iVar2 + 0x35);
  bVar4 = cVar3 == '\0';
  if (bVar4) {
    cVar3 = *(char *)(param_1 + 0x5c);
  }
  if (!bVar4 || cVar3 != '\0') {
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0x5d) = cVar3;
  *(undefined1 *)(iVar2 + 0x13) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 1;
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 1;
  return;
}

