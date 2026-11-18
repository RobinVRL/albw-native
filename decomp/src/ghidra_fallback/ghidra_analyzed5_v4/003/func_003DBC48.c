#include "ghidra_types.h"


// USA 003DBC48 <- EU 003DBC28 (Ghidra, non-matching)

undefined4 func_003DBC48(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(uint **)(param_1 + 4);
  if ((((char)puVar1[3] == '\0') && (param_2 != 0)) && (param_3 != 0)) {
    if (((*puVar1 == 0) && (0x13ffffff < param_2)) && (param_2 + param_3 < 0x1c000000)) {
      puVar1[2] = param_3;
      *puVar1 = param_2;
      puVar1[1] = param_2 + 0xc000000;
      uVar2 = 1;
      *(undefined1 *)(puVar1 + 3) = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}

