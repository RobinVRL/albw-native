#include "ghidra_types.h"

extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);

// USA 0046AFC8 <- EU 0046AFA0 (Ghidra, non-matching)

undefined4 func_0046AFC8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(short *)(param_1 + 0x76);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (-1 < (int)uVar1) {
    if (uVar1 < *(uint *)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar2 + 0xc) + uVar1 * 0x38;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    if (*(char *)(iVar2 + 0x35) != '\0') {
      return 0;
    }
  }
  return func_0066DF38((undefined4 *)(param_1 + 0x98),10);
}

