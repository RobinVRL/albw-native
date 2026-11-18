#include "ghidra_types.h"


// USA 00506F38 <- EU 00506F10 (Ghidra, non-matching)

void func_00506F38(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_3 + param_2 * 0x30 + 8);
  uVar1 = *(uint *)(iVar2 + 0x52) >> 0x18;
  if (*(char *)(param_3 + param_2 * 0x30 + 0x2d) == '\0') {
    if (uVar1 == 0xff) {
      return;
    }
    if (uVar1 < 0xef) {
      iVar3 = uVar1 + 0x10;
    }
    else {
      iVar3 = 0xff;
    }
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 < 0x11) {
      iVar3 = 0;
    }
    else {
      iVar3 = uVar1 - 0x10;
    }
  }
  *(undefined1 *)(iVar2 + 0x56) = 1;
  *(int *)(iVar2 + 0x52) = iVar3 << 0x18;
  return;
}

