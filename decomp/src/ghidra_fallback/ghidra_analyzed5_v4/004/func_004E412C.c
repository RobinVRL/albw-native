#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_004e4130;

// USA 004E412C <- EU 004E4104 (Ghidra, non-matching)
// GLOBAL DAT_004e4130 int

undefined4 func_004E412C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004e4130;
  *param_1 = DAT_004e4130;
  param_1[200] = iVar1 + 0x58;
  param_1[0x103] = iVar1 + 0xbc;
  puVar2 = func_004EE540(param_1 + 0x118);
  return func_001510A4(puVar2 + -0x118);
}

