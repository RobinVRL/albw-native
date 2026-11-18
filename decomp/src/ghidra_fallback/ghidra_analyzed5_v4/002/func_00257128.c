#include "ghidra_types.h"

extern int func_00489AD8(int param_1);
extern int func_00588F14(int param_1);
extern int *DAT_00257190;

// USA 00257128 <- EU 00257150 (Ghidra, non-matching)
// GLOBAL DAT_00257190 int *

void func_00257128(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  func_00489AD8(iVar2 + 0x28);
  piVar1 = DAT_00257190;
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x2c);
  if (*piVar1 != 0) {
    iVar3 = func_00588F14(*piVar1);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar3 + 4);
  }
  return;
}

