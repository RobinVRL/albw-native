#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0033db44;

// USA 0033DB2C <- EU 0033DB08 (Ghidra, non-matching)
// GLOBAL DAT_0033db44 int

undefined4 func_0033DB2C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0033db44;
  *param_1 = DAT_0033db44;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x121);
  func_0036D0E0(puVar2 + -0x14);
  func_0036D0E0(puVar2 + -0x15);
  return func_001510A4(puVar2 + -0x121);
}

