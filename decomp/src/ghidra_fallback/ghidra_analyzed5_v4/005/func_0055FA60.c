#include "ghidra_types.h"


// USA 0055FA60 <- EU 0055FA38 (Ghidra, non-matching)

int func_0055FA60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0xa8) + iVar1 * 0x148 + 0x144) == '\x02') {
        iVar1 = *(int *)(param_1 + 0xa8) + iVar1 * 0x148;
        goto LAB_0055fadc;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0xb0) + iVar2 * 0x148 + 0x144) == '\x02') {
        iVar1 = *(int *)(param_1 + 0xb0) + iVar2 * 0x148;
LAB_0055fadc:
        return (int)*(char *)(*(int *)(iVar1 + 0x14) + 0x14);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(param_1 + 0xac));
  }
  return -1;
}

