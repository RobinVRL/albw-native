#include "ghidra_types.h"

extern int func_003F7D70(int param_1);
extern int *DAT_0014cedc;
extern undefined4 DAT_0014cee0;

// USA 0014CEA4 <- EU 0014CEA4 (Ghidra, non-matching)
// GLOBAL DAT_0014cedc int *
// GLOBAL DAT_0014cee0 undefined4

void func_0014CEA4(int param_1)

{
  func_003F7D70(*DAT_0014cedc);
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  return;
}

