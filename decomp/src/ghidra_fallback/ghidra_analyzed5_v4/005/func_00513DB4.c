#include "ghidra_types.h"

extern int func_00582250(int param_1);
extern undefined4 DAT_00513e20;
extern int *DAT_00513e24;

// USA 00513DB4 <- EU 00513D8C (Ghidra, non-matching)
// GLOBAL DAT_00513e20 undefined4
// GLOBAL DAT_00513e24 int *

void func_00513DB4(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x55c) = 0;
  uVar1 = DAT_00513e20;
  *(undefined4 *)(param_1 + 0x560) = DAT_00513e20;
  *(undefined4 *)(param_1 + 0x564) = uVar1;
  *(undefined4 *)(param_1 + 0x568) = uVar1;
  if ((-1 < *(int *)(param_1 + 0x2a0)) && (-1 < *(int *)(param_1 + 0x2a4))) {
    puVar2 = (uint *)func_00582250(*DAT_00513e24);
    if (*(uint *)(param_1 + 0x2a0) < *puVar2) {
      iVar3 = *(int *)(puVar2[2] + *(uint *)(param_1 + 0x2a0) * 4);
    }
    else {
      iVar3 = 0;
    }
    iVar3 = **(int **)(iVar3 + 0x28);
    *(undefined1 *)(param_1 + 0x55c) = 1;
    *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(iVar3 + 0x20);
  }
  return;
}

