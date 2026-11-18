#include "ghidra_types.h"


// USA 004942DC <- EU 004942B4 (Ghidra, non-matching)

bool func_004942DC(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  
  bVar2 = param_3 != 0;
  puVar1 = param_2;
  if (bVar2) {
    puVar1 = *(undefined4 **)(param_1 + 0x50);
  }
  if (bVar2 && puVar1 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_3 + 0x20);
  }
  return bVar2 && puVar1 != (undefined4 *)0x0;
}

