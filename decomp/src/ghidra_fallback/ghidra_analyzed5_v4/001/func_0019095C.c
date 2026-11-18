#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00190984;

// USA 0019095C <- EU 0019095C (Ghidra, non-matching)
// GLOBAL DAT_00190984 int

undefined4 func_0019095C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00190984;
  *param_1 = DAT_00190984;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EE540(param_1 + 0x10e);
  return func_001510A4(puVar2 + -0x10e);
}

