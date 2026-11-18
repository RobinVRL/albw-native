#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);

// USA 00210FB4 <- EU 00210FB4 (Ghidra, non-matching)

void func_00210FB4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x98c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x990))) {
      iVar2 = *(int *)(iVar1 + 0x20);
      if ((iVar2 != 0) &&
         ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
        *(undefined1 *)(iVar2 + 0x280) = 1;
      }
      *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
    }
    func_0065D774((undefined4 *)(param_1 + 0x8bc),3);
  }
  return;
}

