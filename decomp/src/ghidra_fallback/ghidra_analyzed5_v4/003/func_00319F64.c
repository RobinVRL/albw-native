#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00319f7c;

// USA 00319F64 <- EU 00319F40 (Ghidra, non-matching)
// GLOBAL DAT_00319f7c int

undefined4 func_00319F64(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00319f7c + 0x54;
  *param_1 = DAT_00319f7c;
  param_1[200] = iVar2;
  func_002E1B70(param_1 + 0x138);
  puVar1 = func_004EE540(param_1 + 0x10e);
  return func_001510A4(puVar1 + -0x10e);
}

