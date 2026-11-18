#include "ghidra_types.h"

extern undefined4 DAT_004627d4;

// USA 00462760 <- EU 00462738 (Ghidra, non-matching)
// GLOBAL DAT_004627d4 undefined4

void func_00462760(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x94);
  uVar3 = DAT_004627d4;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0);
    *(undefined4 *)(*(int *)(iVar2 + 0x7c) + ((uint)(*(int *)(iVar2 + 0x74) << 0x1e) >> 0x19)) =
         uVar3;
    *(byte *)(iVar2 + 0x9e) = *(byte *)(iVar2 + 0x9e) & 0xfb;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 0x28))(*(int **)(param_1 + 0x94),0);
    *(undefined4 *)(*(int *)(iVar2 + 0x7c) + ((uint)(*(int *)(iVar2 + 0x74) << 0x1e) >> 0x19) + 4) =
         uVar3;
    *(byte *)(iVar2 + 0x9e) = *(byte *)(iVar2 + 0x9e) & 0xfb;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}

