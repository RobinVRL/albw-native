#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00374ec0;
extern int DAT_00374ec4;
extern int DAT_00374ec8;
extern int DAT_00374ecc;

// USA 00374E58 <- EU 00374E34 (Ghidra, non-matching)
// GLOBAL DAT_00374ec0 int
// GLOBAL DAT_00374ec4 int
// GLOBAL DAT_00374ec8 int
// GLOBAL DAT_00374ecc int

undefined4 func_00374E58(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00374ec0;
  *param_1 = DAT_00374ec0;
  param_1[200] = iVar1 + 0xbc;
  puVar2 = func_0035D6D0(param_1 + 0x263);
  iVar1 = DAT_00374ec4;
  puVar2[-0x19b] = DAT_00374ec4 + 0xb8;
  puVar2[-0x263] = iVar1;
  func_0036D0E0(puVar2 + -0x49);
  func_0036D0E0(puVar2 + -0x4a);
  iVar1 = DAT_00374ec8;
  puVar2[-0x19b] = DAT_00374ec8 + 0x98;
  puVar2[-0x263] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x8c);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_00374ecc;
  puVar2[-0x56] = DAT_00374ecc + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

