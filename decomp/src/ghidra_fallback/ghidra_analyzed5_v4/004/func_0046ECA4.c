#include "ghidra_types.h"

extern int func_001B6D40(int param_1);
extern int func_004277DC(int param_1);
extern int func_005452D4(void *param_1);
extern int *DAT_0046ecec;

// USA 0046ECA4 <- EU 0046EC7C (Ghidra, non-matching)
// GLOBAL DAT_0046ecec int *

undefined4 func_0046ECA4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  func_001B6D40(param_1);
  func_004277DC(*(int *)(param_1 + 0x74));
  iVar1 = *DAT_0046ecec;
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x80) + 0x18);
  *(uint *)(*(int *)(iVar1 + 0x80) + 0x18) = uVar2 | 1;
  *(uint *)(*(int *)(iVar1 + 0x80) + 0x18) = uVar2 | 3;
  iVar1 = *(int *)(iVar1 + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 3;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    return func_005452D4(*(int *)(param_1 + 0xac) + 0x114);
  }
  return 0;
}

