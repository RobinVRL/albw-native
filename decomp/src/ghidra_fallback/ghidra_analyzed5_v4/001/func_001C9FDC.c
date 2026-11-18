#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001ca000;

// USA 001C9FDC <- EU 001C9FDC (Ghidra, non-matching)
// GLOBAL DAT_001ca000 int

undefined4 func_001C9FDC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001ca000;
  *param_1 = DAT_001ca000;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x110);
  return func_001510A4(puVar2 + -0x110);
}

