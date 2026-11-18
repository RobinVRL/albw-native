#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_002cd360;
extern int DAT_002cd364;
extern int DAT_002cd368;

// USA 002CD314 <- EU 002CD2F0 (Ghidra, non-matching)
// GLOBAL DAT_002cd360 int
// GLOBAL DAT_002cd364 int
// GLOBAL DAT_002cd368 int

undefined4 func_002CD314(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_002cd360;
  *param_1 = DAT_002cd360;
  param_1[200] = iVar2 + 0xb8;
  func_0036D0E0(param_1 + 0x21a);
  func_0036D0E0(param_1 + 0x219);
  iVar2 = DAT_002cd364 + 0x98;
  *param_1 = DAT_002cd364;
  param_1[200] = iVar2;
  puVar1 = func_0035D6D0(param_1 + 0x1d7);
  puVar1 = func_00503368(puVar1 + -0xb9);
  iVar2 = DAT_002cd368;
  puVar1[-0x56] = DAT_002cd368 + 0x5c;
  puVar1[-0x11e] = iVar2;
  puVar1 = func_004EE540(puVar1 + -0x1a);
  return func_001510A4(puVar1 + -0x104);
}

