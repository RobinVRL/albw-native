#include "ghidra_types.h"

extern int func_004A3700(int param_1);
extern int func_005811E8(int *param_1);

// USA 002AC2D4 <- EU 002AC2B0 (Ghidra, non-matching)

void func_002AC2D4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_005811E8((int *)(param_1 + 0x2a8));
  if (((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x2a8), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x2ac))) {
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar1);
  }
  iVar1 = func_005811E8((int *)(param_1 + 0x2b0));
  if (((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x2b0), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x2b4))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) &&
       (0 < *(int *)(iVar2 + 4))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  iVar1 = func_005811E8((int *)(param_1 + 0x2b8));
  if (((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x2b8), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 700))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) &&
       (0 < *(int *)(iVar2 + 4))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  return;
}

