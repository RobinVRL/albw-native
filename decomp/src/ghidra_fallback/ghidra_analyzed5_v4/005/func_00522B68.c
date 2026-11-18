#include "ghidra_types.h"

extern int func_0051E940(int *param_1,int param_2);

// USA 00522B68 <- EU 00522B40 (Ghidra, non-matching)

void func_00522B68(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      if (uVar2 < *(uint *)(param_1 + 0xc)) {
        iVar1 = *(int *)(param_1 + 0x14) + uVar2 * 0x28;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x14);
      }
      if (*(int *)(iVar1 + 4) != 0) {
        if (uVar2 < *(uint *)(param_1 + 0xc)) {
          iVar1 = *(int *)(param_1 + 0x14) + uVar2 * 0x28;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x14);
        }
        func_0051E940(*(int **)(iVar1 + 4),param_2);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(param_1 + 0xc));
  }
  return;
}

