#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_004dcabc;
extern int DAT_004dcac0;
extern int DAT_004dcac4;
extern int DAT_004dcac8;

// USA 004DCA50 <- EU 004DCA28 (Ghidra, non-matching)
// GLOBAL DAT_004dcabc int
// GLOBAL DAT_004dcac0 int
// GLOBAL DAT_004dcac4 int
// GLOBAL DAT_004dcac8 int

undefined4 func_004DCA50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_004dcabc;
  param_1[200] = DAT_004dcabc + 0xb8;
  *param_1 = iVar2;
  func_0036D0E0(param_1 + 0x263);
  iVar2 = DAT_004dcac0;
  param_1[200] = DAT_004dcac0 + 0xb8;
  *param_1 = iVar2;
  func_0036D0E0(param_1 + 0x21a);
  func_0036D0E0(param_1 + 0x219);
  iVar2 = DAT_004dcac4 + 0x98;
  *param_1 = DAT_004dcac4;
  param_1[200] = iVar2;
  puVar1 = func_0035D6D0(param_1 + 0x1d7);
  puVar1 = func_00503368(puVar1 + -0xb9);
  iVar2 = DAT_004dcac8;
  puVar1[-0x56] = DAT_004dcac8 + 0x5c;
  puVar1[-0x11e] = iVar2;
  puVar1 = func_004EE540(puVar1 + -0x1a);
  return func_001510A4(puVar1 + -0x104);
}

