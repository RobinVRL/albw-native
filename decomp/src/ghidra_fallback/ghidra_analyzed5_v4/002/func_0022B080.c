#include "ghidra_types.h"

extern undefined4 *DAT_0022b0bc;

// USA 0022B080 <- EU 0022B080 (Ghidra, non-matching)
// GLOBAL DAT_0022b0bc undefined4 *

void func_0022B080(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0022b0bc;
  *(undefined4 *)(param_1 + 0xcb8) = *DAT_0022b0bc;
  *(undefined4 *)(param_1 + 0xcbc) = puVar1[1];
  *(undefined4 *)(param_1 + 0xcc0) = puVar1[2];
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0xcc0);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0xcb8);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xcbc);
  return;
}

