#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00176310;

// USA 001762E8 <- EU 001762E8 (Ghidra, non-matching)
// GLOBAL DAT_00176310 int

undefined4 func_001762E8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00176310;
  *param_1 = DAT_00176310;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x113);
  return func_001510A4(puVar2 + -0x113);
}

