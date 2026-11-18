#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_004d7de0;

// USA 004D7DE4 <- EU 004D7DBC (Ghidra, non-matching)
// GLOBAL DAT_004d7de0 int

undefined4 func_004D7DE4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004d7de0;
  *param_1 = DAT_004d7de0;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

