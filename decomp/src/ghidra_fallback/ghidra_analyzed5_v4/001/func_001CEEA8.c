#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001ceee4;
extern int DAT_001ceee8;

// USA 001CEEA8 <- EU 001CEEA8 (Ghidra, non-matching)
// GLOBAL DAT_001ceee4 int
// GLOBAL DAT_001ceee8 int

undefined4 func_001CEEA8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001ceee4;
  *param_1 = DAT_001ceee4;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x142);
  iVar1 = DAT_001ceee8;
  puVar2[-0x7a] = DAT_001ceee8 + 0x5c;
  puVar2[-0x142] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x3e);
  return func_001510A4(puVar2 + -0x104);
}

