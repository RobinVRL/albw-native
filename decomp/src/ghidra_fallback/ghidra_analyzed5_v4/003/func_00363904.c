#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00363950;

// USA 00363904 <- EU 003638E0 (Ghidra, non-matching)
// GLOBAL DAT_00363950 undefined4

undefined4 * func_00363904(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = DAT_00363950;
  iVar2 = param_1[0xd];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0xe])) {
    iVar3 = *(int *)(iVar2 + 0x20);
    if ((iVar3 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0xc) && (0 < *(int *)(iVar3 + 4))))) {
      *(undefined1 *)(iVar3 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

