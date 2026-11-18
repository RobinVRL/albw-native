#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_0036de24;
extern int DAT_0036de28;
extern int DAT_0036de2c;

// USA 0036DDE4 <- EU 0036DDC0 (Ghidra, non-matching)
// GLOBAL DAT_0036de24 int
// GLOBAL DAT_0036de28 int
// GLOBAL DAT_0036de2c int

undefined4 func_0036DDE4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0036de24;
  *param_1 = DAT_0036de24;
  param_1[200] = iVar1 + 0x98;
  puVar2 = func_0035D6D0(param_1 + 0x2b1);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_0036de28;
  puVar2[-0x130] = DAT_0036de28 + 0x98;
  puVar2[-0x1f8] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x21);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_0036de2c;
  puVar2[-0x56] = DAT_0036de2c + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

