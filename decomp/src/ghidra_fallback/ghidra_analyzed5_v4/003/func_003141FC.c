#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00314290;
extern int DAT_00314294;
extern int DAT_00314298;
extern int DAT_0031429c;
extern int DAT_003142a0;

// USA 003141FC <- EU 003141D8 (Ghidra, non-matching)
// GLOBAL DAT_00314290 int
// GLOBAL DAT_00314294 int
// GLOBAL DAT_00314298 int
// GLOBAL DAT_0031429c int
// GLOBAL DAT_003142a0 int

undefined4 func_003141FC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00314290;
  param_1[200] = DAT_00314290 + 0xbc;
  *param_1 = iVar1;
  func_002E1B70(param_1 + 0x290);
  puVar2 = func_0036746C(param_1 + 0x276);
  iVar1 = DAT_00314294;
  puVar2[-0x1ae] = DAT_00314294 + 0xbc;
  puVar2[-0x276] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x13);
  iVar1 = DAT_00314298;
  puVar2[-0x19b] = DAT_00314298 + 0xb8;
  puVar2[-0x263] = iVar1;
  func_0036D0E0(puVar2 + -0x49);
  func_0036D0E0(puVar2 + -0x4a);
  iVar1 = DAT_0031429c;
  puVar2[-0x19b] = DAT_0031429c + 0x98;
  puVar2[-0x263] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x8c);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_003142a0;
  puVar2[-0x56] = DAT_003142a0 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

