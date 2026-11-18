#include "ghidra_types.h"


// USA 00112394 <- EU 00112394 (Ghidra, non-matching)

int func_00112394(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  do {
    uVar3 = *(int *)(param_1 + 0x324) + 1U & *(uint *)(param_1 + 0x454);
    *(uint *)(param_1 + 0x324) = uVar3;
    if (*(int *)(*(int *)(param_1 + 800) + uVar3 * 0x2b0 + 0xd4) == 0) {
      iVar2 = *(int *)(param_1 + 800) + *(int *)(param_1 + 0x324) * 0x2b0;
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = param_1 + param_2 * 4;
      if (*(int *)(iVar1 + 0x20) == 0) {
        *(int *)(iVar1 + 0x20) = iVar2;
        *(undefined4 *)(iVar2 + 0xd0) = 0;
      }
      else {
        *(int *)(*(int *)(iVar1 + 0x20) + 0xcc) = iVar2;
        *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar1 + 0x20);
        *(int *)(iVar1 + 0x20) = iVar2;
      }
      *(undefined4 *)(iVar2 + 0xcc) = 0;
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + -1;
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x448));
  return 0;
}

