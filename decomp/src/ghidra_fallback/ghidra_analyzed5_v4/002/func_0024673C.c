#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_002467d0;
extern int DAT_002467d4;
extern int DAT_002467d8;
extern int DAT_002467dc;

// USA 0024673C <- EU 0024673C (Ghidra, non-matching)
// GLOBAL DAT_002467d0 int
// GLOBAL DAT_002467d4 int
// GLOBAL DAT_002467d8 int
// GLOBAL DAT_002467dc int

undefined4 func_0024673C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_002467d0;
  param_1[200] = DAT_002467d0 + 0xb8;
  *param_1 = iVar2;
  func_0036D0E0(param_1 + 0x263);
  iVar2 = DAT_002467d4;
  param_1[200] = DAT_002467d4 + 0xb8;
  *param_1 = iVar2;
  func_0036D0E0(param_1 + 0x21a);
  func_0036D0E0(param_1 + 0x219);
  iVar2 = DAT_002467d8 + 0x98;
  *param_1 = DAT_002467d8;
  param_1[200] = iVar2;
  puVar1 = func_0035D6D0(param_1 + 0x1d7);
  puVar1 = func_00503368(puVar1 + -0xb9);
  iVar2 = DAT_002467dc;
  puVar1[-0x56] = DAT_002467dc + 0x5c;
  puVar1[-0x11e] = iVar2;
  puVar1 = func_004EE540(puVar1 + -0x1a);
  return func_001510A4(puVar1 + -0x104);
}

