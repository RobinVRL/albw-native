#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00311b50;
extern int DAT_00311b54;
extern int DAT_00311b58;
extern int DAT_00311b5c;

// USA 00311AE0 <- EU 00311ABC (Ghidra, non-matching)
// GLOBAL DAT_00311b50 int
// GLOBAL DAT_00311b54 int
// GLOBAL DAT_00311b58 int
// GLOBAL DAT_00311b5c int

undefined4 func_00311AE0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00311b50;
  *param_1 = DAT_00311b50;
  param_1[200] = iVar2 + 0xb8;
  puVar1 = func_0035D6D0(param_1 + 700);
  func_0036D0E0(puVar1 + -5);
  iVar2 = DAT_00311b54;
  puVar1[-500] = DAT_00311b54 + 0xb8;
  puVar1[-700] = iVar2;
  func_0036D0E0(puVar1 + -0xa2);
  func_0036D0E0(puVar1 + -0xa3);
  iVar2 = DAT_00311b58 + 0x98;
  puVar1[-700] = DAT_00311b58;
  puVar1[-500] = iVar2;
  puVar1 = func_0035D6D0(puVar1 + -0xe5);
  puVar1 = func_00503368(puVar1 + -0xb9);
  iVar2 = DAT_00311b5c;
  puVar1[-0x56] = DAT_00311b5c + 0x5c;
  puVar1[-0x11e] = iVar2;
  puVar1 = func_004EE540(puVar1 + -0x1a);
  return func_001510A4(puVar1 + -0x104);
}

