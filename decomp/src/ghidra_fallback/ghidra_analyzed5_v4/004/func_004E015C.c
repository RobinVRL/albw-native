#include "ghidra_types.h"

extern int func_00559B54(void);

// USA 004E015C <- EU 004E0134 (Ghidra, non-matching)

void func_004E015C(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_00559B54();
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_1 + 0x3e4) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  return;
}

