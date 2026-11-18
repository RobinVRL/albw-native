#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00339b2c;

// USA 00339B2C <- EU 00339B08 (Ghidra, non-matching)
// GLOBAL DAT_00339b2c int

undefined4 func_00339B2C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00339b2c;
  *param_1 = DAT_00339b2c;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x118);
  return func_001510A4(puVar2 + -0x118);
}

