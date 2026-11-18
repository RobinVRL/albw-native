#include "ghidra_types.h"

extern int func_0066F3FC(undefined4 *param_1,undefined1 param_2);

// USA 0048798C <- EU 00487964 (Ghidra, non-matching)

undefined4 func_0048798C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x138);
  if (iVar1 != 0) {
    param_2 = *(int *)(iVar1 + 8);
  }
  if ((iVar1 != 0 && param_2 != 0) && (uVar2 = (uint)*(short *)(iVar1 + 2), -1 < (int)uVar2)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
      iVar1 = iVar1 + uVar2 * 0x38;
    }
    if (*(char *)(iVar1 + 0x35) != '\0') {
      return 0;
    }
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return func_0066F3FC((undefined4 *)(param_1 + 0xe4),1);
}

