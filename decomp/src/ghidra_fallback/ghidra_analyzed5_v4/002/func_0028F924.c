#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 0028F924 <- EU 0028F94C (Ghidra, non-matching)

void func_0028F924(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x1c);
  if (((*(uint *)(iVar2 + 0x328) & 0x80) != 0) && (*(char *)(iVar2 + 0x33c) == '\f')) {
    return;
  }
  puVar1 = (undefined2 *)func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x7e);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0x74;
  }
  return;
}

