#include "ghidra_types.h"


// USA 004CF3AC <- EU 004CF384 (Ghidra, non-matching)

void func_004CF3AC(int param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_3 < 0) {
    uVar1 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x5c)) {
      do {
        if (uVar1 < *(uint *)(param_1 + 0x5c)) {
          iVar2 = *(int *)(*(int *)(param_1 + 100) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        uVar1 = uVar1 + 1;
        *(undefined1 *)(iVar2 + 0x9d) = param_2;
      } while ((int)uVar1 < *(int *)(param_1 + 0x5c));
    }
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0x68)) {
      do {
        if (uVar1 < *(uint *)(param_1 + 0x68)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x70) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        uVar1 = uVar1 + 1;
        *(undefined1 *)(iVar2 + 0x9d) = param_2;
      } while ((int)uVar1 < *(int *)(param_1 + 0x68));
      return;
    }
  }
  else {
    if (param_3 < *(uint *)(param_1 + 0x5c)) {
      iVar2 = *(int *)(*(int *)(param_1 + 100) + param_3 * 4);
    }
    else {
      iVar2 = 0;
    }
    *(undefined1 *)(iVar2 + 0x9d) = param_2;
    if (*(uint *)(param_1 + 0x68) != 0) {
      if (param_3 < *(uint *)(param_1 + 0x68)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x70) + param_3 * 4);
      }
      else {
        iVar2 = 0;
      }
      *(undefined1 *)(iVar2 + 0x9d) = param_2;
    }
  }
  return;
}

