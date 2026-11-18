#include "ghidra_types.h"

extern int func_0012CE68(int param_1);
extern int *DAT_0046eba4;

// USA 0046EB80 <- EU 0046EB58 (Ghidra, non-matching)
// GLOBAL DAT_0046eba4 int *

undefined4 func_0046EB80(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*DAT_0046eba4 + 0x90);
  if (*(byte *)(param_1 + 0x90) < 4) {
    puVar1 = puVar1 + *(byte *)(param_1 + 0x90);
  }
  piVar2 = (int *)*puVar1;
  (**(code **)(*piVar2 + 0x34))(piVar2);
  *(undefined1 *)((int)piVar2 + 0xe) = 0;
  *(undefined1 *)((int)piVar2 + 0xd) = 0;
  return func_0012CE68(param_1);
}

