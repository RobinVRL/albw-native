#include "ghidra_types.h"

extern undefined4 *DAT_0022b4f4;

// USA 0022B4B8 <- EU 0022B4B8 (Ghidra, non-matching)
// GLOBAL DAT_0022b4f4 undefined4 *

void func_0022B4B8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0022b4f4;
  *(undefined4 *)(param_1 + 0xcb8) = *DAT_0022b4f4;
  *(undefined4 *)(param_1 + 0xcbc) = puVar1[1];
  *(undefined4 *)(param_1 + 0xcc0) = puVar1[2];
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0xcc0);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0xcb8);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xcbc);
  return;
}

