#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_002835dc;
extern int DAT_002835e0;
extern int DAT_002835e4;
extern int DAT_002835e8;

// USA 00283528 <- EU 00283550 (Ghidra, non-matching)
// GLOBAL DAT_002835dc int
// GLOBAL DAT_002835e0 int
// GLOBAL DAT_002835e4 int
// GLOBAL DAT_002835e8 int

undefined4 func_00283528(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_002835dc;
  *param_1 = DAT_002835dc;
  param_1[200] = iVar1 + 0xbc;
  puVar2 = func_0035D6D0(param_1 + 0x263);
  iVar1 = DAT_002835e0;
  puVar2[-0x19b] = DAT_002835e0 + 0xb8;
  puVar2[-0x263] = iVar1;
  func_0036D0E0(puVar2 + -0x49);
  func_0036D0E0(puVar2 + -0x4a);
  iVar1 = DAT_002835e4;
  puVar2[-0x19b] = DAT_002835e4 + 0x98;
  puVar2[-0x263] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x8c);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_002835e8;
  puVar2[-0x56] = DAT_002835e8 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

