#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);

// USA 0049BE50 <- EU 0049BE28 (Ghidra, non-matching)

int func_0049BE50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 != 0 && iVar1 != 4) {
    puVar3 = *(uint **)(param_1 + 0x7c);
    uVar2 = *puVar3;
    software_interrupt(0x24);
    if ((int)uVar2 < 0) {
      func_0010A98C(uVar2);
    }
    *(undefined1 *)(puVar3 + 1) = 1;
    *(undefined4 *)(param_1 + 0x78) = 4;
    iVar1 = *(int *)(param_1 + 0x78);
  }
  return iVar1;
}

