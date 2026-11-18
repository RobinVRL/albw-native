#include "ghidra_types.h"

extern undefined4 DAT_001dbd78;

// USA 001DBD54 <- EU 001DBD54 (Ghidra, non-matching)
// GLOBAL DAT_001dbd78 undefined4

void func_001DBD54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_001dbd78;
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x3dc) = DAT_001dbd78;
  *(undefined4 *)(iVar2 + 0x3e0) = uVar1;
  *(undefined4 *)(iVar2 + 0x3e4) = uVar1;
  *(undefined1 *)(iVar2 + 0x6c1) = 1;
  return;
}

