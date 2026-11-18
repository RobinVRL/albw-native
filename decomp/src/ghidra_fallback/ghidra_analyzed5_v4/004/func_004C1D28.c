#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_004c1d78;
extern int DAT_004c1d7c;
extern int DAT_004c1d80;

// USA 004C1D28 <- EU 004C1D00 (Ghidra, non-matching)
// GLOBAL DAT_004c1d78 int
// GLOBAL DAT_004c1d7c int
// GLOBAL DAT_004c1d80 int

undefined4 func_004C1D28(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004c1d78;
  param_1[200] = DAT_004c1d78 + 0xb8;
  *param_1 = iVar1;
  func_0036D0E0(param_1 + 0x21a);
  func_0036D0E0(param_1 + 0x219);
  iVar1 = DAT_004c1d7c;
  param_1[200] = DAT_004c1d7c + 0x98;
  *param_1 = iVar1;
  puVar2 = func_0035D6D0(param_1 + 0x1d7);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_004c1d80;
  puVar2[-0x56] = DAT_004c1d80 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

