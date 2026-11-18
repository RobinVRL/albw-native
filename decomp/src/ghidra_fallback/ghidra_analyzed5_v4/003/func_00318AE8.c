#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00318b70;

// USA 00318AE8 <- EU 00318AC4 (Ghidra, non-matching)
// GLOBAL DAT_00318b70 int

undefined4 func_00318AE8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00318b70;
  param_1[200] = DAT_00318b70 + 0x54;
  *param_1 = iVar1;
  iVar1 = param_1[0x10e];
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x10f])) &&
     (((*(uint *)(iVar1 + 0x3c) & 4) != 0 || (*(uint *)(iVar1 + 0x3c) & 0x40) != 0 ||
      (((iVar2 = *(int *)(iVar1 + 0x20), iVar2 != 0 &&
        (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) && (0 < *(int *)(iVar2 + 4))))))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) &&
       (0 < *(int *)(iVar2 + 4))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  return func_001510A4(param_1);
}

