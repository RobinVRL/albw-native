#include "ghidra_types.h"

extern int func_003F6A20(void);
extern int *DAT_003f11c8;

// USA 003F11B8 <- EU 003F1198 (Ghidra, non-matching)
// GLOBAL DAT_003f11c8 int *

undefined4 func_003F11B8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = DAT_003f11c8;
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  iVar2 = *DAT_003f11c8;
  *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(iVar2 + 100) = uVar3;
  *(undefined4 *)(iVar2 + 0x60) = uVar4;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *piVar1 = iVar2 + 0x80;
  return func_003F6A20();
}

