#include "ghidra_types.h"

extern int func_00232540(undefined4 *param_1);
extern undefined4 DAT_001b6e4c;
extern undefined4 DAT_001b6e50;

// USA 001B6E04 <- EU 001B6E04 (Ghidra, non-matching)
// GLOBAL DAT_001b6e4c undefined4
// GLOBAL DAT_001b6e50 undefined4

undefined4 * func_001B6E04(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_00232540(param_1);
  *puVar2 = DAT_001b6e4c;
  uVar1 = DAT_001b6e50;
  *(undefined2 *)(puVar2 + 8) = 0;
  *(undefined2 *)((int)puVar2 + 0x22) = 0xffff;
  puVar2[9] = uVar1;
  puVar2[10] = 0;
  *(undefined2 *)(puVar2 + 0xb) = 0;
  *(undefined2 *)((int)puVar2 + 0x2e) = 0xffff;
  puVar2[0xc] = uVar1;
  puVar2[0xd] = 0;
  return puVar2;
}

