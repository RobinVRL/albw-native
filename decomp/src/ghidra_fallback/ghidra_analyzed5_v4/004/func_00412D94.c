#include "ghidra_types.h"


// USA 00412D94 <- EU 00412D74 (Ghidra, non-matching)

int func_00412D94(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x18c) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x184);
    uVar3 = *(uint *)(param_1 + 0x188);
    if (uVar2 < uVar3) {
      if (uVar3 < param_2 + uVar2) {
        return 0;
      }
      *(uint *)(param_1 + 0x184) = param_2 + uVar2;
      iVar1 = *(int *)(param_1 + 0x17c) + uVar2 * 4;
    }
    else if (*(uint *)(param_1 + 0x180) < uVar2 + param_2) {
      if (uVar3 < param_2) {
        return 0;
      }
      *(uint *)(param_1 + 0x184) = param_2;
      iVar1 = *(int *)(param_1 + 0x17c);
    }
    else {
      *(uint *)(param_1 + 0x184) = uVar2 + param_2;
      iVar1 = *(int *)(param_1 + 0x17c) + uVar2 * 4;
    }
    if ((iVar1 != 0) && (*(uint *)(param_1 + 0x184) == uVar3)) {
      *(undefined1 *)(param_1 + 0x18c) = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

