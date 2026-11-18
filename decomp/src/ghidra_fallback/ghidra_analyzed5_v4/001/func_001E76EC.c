#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_001e7750;
extern int DAT_001e7754;
extern int DAT_001e7758;

// USA 001E76EC <- EU 001E76EC (Ghidra, non-matching)
// GLOBAL DAT_001e7750 int
// GLOBAL DAT_001e7754 int
// GLOBAL DAT_001e7758 int

undefined4 func_001E76EC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001e7750;
  *param_1 = DAT_001e7750;
  param_1[200] = iVar1 + 0x98;
  puVar2 = func_0035D6D0(param_1 + 0x2b1);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_001e7754;
  puVar2[-0x130] = DAT_001e7754 + 0x98;
  puVar2[-0x1f8] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x21);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_001e7758;
  puVar2[-0x56] = DAT_001e7758 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

