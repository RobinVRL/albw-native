#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_004d465c;
extern int DAT_004d4660;

// USA 004D463C <- EU 004D4614 (Ghidra, non-matching)
// GLOBAL DAT_004d465c int
// GLOBAL DAT_004d4660 int

undefined4 func_004D463C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004d465c;
  param_1[200] = DAT_004d465c + 0x78;
  *param_1 = iVar1;
  func_0036D0E0(param_1 + 0x193);
  iVar1 = DAT_004d4660;
  param_1[200] = DAT_004d4660 + 0x5c;
  *param_1 = iVar1;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

