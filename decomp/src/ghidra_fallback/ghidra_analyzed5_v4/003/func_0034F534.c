#include "ghidra_types.h"

extern int func_0036FA1C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0034f58c;
extern undefined4 DAT_0034f590;

// USA 0034F534 <- EU 0034F510 (Ghidra, non-matching)
// GLOBAL DAT_0034f58c int *
// GLOBAL DAT_0034f590 undefined4

void func_0034F534(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0036FA1C((undefined4 *)(param_1 + 0x44),0);
  *(undefined1 *)(param_1 + 0x55) = 1;
  piVar1 = DAT_0034f58c;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  iVar2 = *piVar1;
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x99) != '\0')) {
    uVar3 = *(undefined4 *)(iVar2 + 0x9c);
    *(undefined1 *)(iVar2 + 0x99) = 0;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined1 *)(param_1 + 0x250) = 1;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x108) = DAT_0034f590;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  return;
}

