#include "ghidra_types.h"

extern int func_003529C0(undefined4 *param_1);
extern undefined4 DAT_003b1870;
extern undefined4 DAT_003b1874;
extern undefined4 DAT_003b1878;
extern undefined4 DAT_003b187c;

// USA 003B1828 <- EU 003B1804 (Ghidra, non-matching)
// GLOBAL DAT_003b1870 undefined4
// GLOBAL DAT_003b1874 undefined4
// GLOBAL DAT_003b1878 undefined4
// GLOBAL DAT_003b187c undefined4

undefined4 * func_003B1828(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *param_1 = DAT_003b1870;
  puVar2 = func_003529C0(param_1 + 1);
  uVar1 = DAT_003b1878;
  puVar2[0x12] = 0;
  puVar2[-1] = uVar1;
  uVar1 = DAT_003b1874;
  puVar2[0x10] = 0;
  puVar2[0x11] = param_2;
  puVar2[0x13] = uVar1;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *(undefined2 *)(puVar2 + 0x16) = 0;
  *(undefined2 *)((int)puVar2 + 0x5a) = 0;
  *(undefined2 *)(puVar2 + 0x17) = 0;
  uVar1 = DAT_003b187c;
  *(undefined1 *)((int)puVar2 + 0x5e) = 0;
  *(undefined1 *)((int)puVar2 + 0x5f) = 1;
  puVar2[0x18] = uVar1;
  puVar2[0x19] = param_3;
  return puVar2 + -1;
}

