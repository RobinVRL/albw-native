#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0024fb34;

// USA 0024FB0C <- EU 0024FB0C (Ghidra, non-matching)
// GLOBAL DAT_0024fb34 int

undefined4 func_0024FB0C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0024fb34;
  *param_1 = DAT_0024fb34;
  param_1[200] = iVar1 + 0x58;
  puVar2 = func_004EE540(param_1 + 0x107);
  return func_001510A4(puVar2 + -0x107);
}

