#include "ghidra_types.h"

extern undefined4 DAT_003558f0;
extern undefined4 DAT_003558f4;

// USA 00355898 <- EU 00355874 (Ghidra, non-matching)
// GLOBAL DAT_003558f0 undefined4
// GLOBAL DAT_003558f4 undefined4

void func_00355898(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x40c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = DAT_003558f0;
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 1;
  }
  if (param_2 != 4) {
    *(undefined1 *)(param_1 + 0x9ea) = 0;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xae0)) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xae8) + iVar1 * 4);
        iVar1 = iVar1 + 1;
        *puVar2 = *(undefined4 *)(param_1 + 0xaec);
        *(undefined4 **)(param_1 + 0xaec) = puVar2;
      } while (iVar1 < *(int *)(param_1 + 0xae0));
    }
    *(undefined4 *)(param_1 + 0xae0) = 0;
    *(undefined4 *)(param_1 + 0x9d0) = DAT_003558f4;
  }
  return;
}

