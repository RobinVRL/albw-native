#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00316578;

// USA 0031656C <- EU 00316548 (Ghidra, non-matching)
// GLOBAL DAT_00316578 int

undefined4 func_0031656C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00316578;
  *param_1 = DAT_00316578;
  param_1[200] = iVar1 + 0x58;
  param_1[0x103] = iVar1 + 0xbc;
  puVar2 = func_004EE540(param_1 + 0x127);
  return func_001510A4(puVar2 + -0x127);
}

