#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_004e006c;
extern int DAT_004e0070;
extern int DAT_004e0074;
extern int DAT_004e0078;

// USA 004DFFF0 <- EU 004DFFC8 (Ghidra, non-matching)
// GLOBAL DAT_004e006c int
// GLOBAL DAT_004e0070 int
// GLOBAL DAT_004e0074 int
// GLOBAL DAT_004e0078 int

undefined4 func_004DFFF0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004e006c;
  param_1[200] = DAT_004e006c + 0xb8;
  *param_1 = iVar1;
  func_002E1B70(param_1 + 0x275);
  puVar2 = func_0036746C(param_1 + 0x267);
  iVar1 = DAT_004e0070;
  puVar2[-0x19f] = DAT_004e0070 + 0xb8;
  puVar2[-0x267] = iVar1;
  func_0036D0E0(puVar2 + -0x4d);
  func_0036D0E0(puVar2 + -0x4e);
  iVar1 = DAT_004e0074;
  puVar2[-0x19f] = DAT_004e0074 + 0x98;
  puVar2[-0x267] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x90);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_004e0078;
  puVar2[-0x56] = DAT_004e0078 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

