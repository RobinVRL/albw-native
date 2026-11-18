#include "ghidra_types.h"

extern int func_00166150(int param_1);
extern int *DAT_00230aa4;
extern int *DAT_00230aa8;

// USA 00230A08 <- EU 00230A08 (Ghidra, non-matching)
// GLOBAL DAT_00230aa4 int *
// GLOBAL DAT_00230aa8 int *

void func_00230A08(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  
  func_00166150((int)param_1);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  piVar2 = (int *)(**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*piVar2 + 0x10))(piVar2,param_1 + 0x4e);
  iVar5 = *(int *)(*DAT_00230aa4 + 100);
  uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  piVar2 = DAT_00230aa8;
  *(undefined4 *)(iVar5 + 0x14) = uVar3;
  puVar4 = (ushort *)(*piVar2 + 0x33e);
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 1;
  if (*(char *)((int)param_1 + 0x131) != '\0') {
    *(ushort *)(*piVar2 + 0x33e) = uVar1 | 9;
  }
  return;
}

