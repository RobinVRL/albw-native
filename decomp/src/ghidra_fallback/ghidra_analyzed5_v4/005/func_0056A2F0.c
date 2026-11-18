#include "ghidra_types.h"

extern uint DAT_0056a300;

// USA 0056A2F0 <- EU 0056A2C8 (Ghidra, non-matching)
// GLOBAL DAT_0056a300 uint

int func_0056A2F0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
  if ((param_2 < *puVar1) && ((ushort)puVar1[param_2 * 2 + 1] == DAT_0056a300)) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

