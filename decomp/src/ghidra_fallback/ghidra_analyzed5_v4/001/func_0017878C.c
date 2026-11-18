#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001787b0;

// USA 0017878C <- EU 0017878C (Ghidra, non-matching)
// GLOBAL DAT_001787b0 int

undefined4 func_0017878C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001787b0;
  *param_1 = DAT_001787b0;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x110);
  return func_001510A4(puVar2 + -0x110);
}

