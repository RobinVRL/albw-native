#include "ghidra_types.h"

extern int func_00532C78(int param_1);

// USA 00576158 <- EU 00576130 (Ghidra, non-matching)

undefined4 func_00576158(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if ((*(char *)(iVar2 + 0x180) != '\b') ||
     (bVar1 = func_00532C78(*(int *)(iVar2 + 0x1dc) + 0x5c), bVar1)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0x214);
  }
  return uVar3;
}

