#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_001e30cc;

// USA 001E309C <- EU 001E309C (Ghidra, non-matching)
// GLOBAL DAT_001e30cc int

undefined4 func_001E309C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001e30cc;
  *param_1 = DAT_001e30cc;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_00503368(param_1 + 0x10d);
  puVar2 = func_0035D6D0(puVar2 + -10);
  return func_001510A4(puVar2 + -0x103);
}

