#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00173ed0;

// USA 00173EAC <- EU 00173EAC (Ghidra, non-matching)
// GLOBAL DAT_00173ed0 int

undefined4 func_00173EAC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00173ed0;
  *param_1 = DAT_00173ed0;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

