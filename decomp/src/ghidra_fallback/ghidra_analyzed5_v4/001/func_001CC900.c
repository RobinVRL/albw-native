#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_001cc970;
extern int DAT_001cc974;
extern int DAT_001cc978;

// USA 001CC900 <- EU 001CC900 (Ghidra, non-matching)
// GLOBAL DAT_001cc970 int
// GLOBAL DAT_001cc974 int
// GLOBAL DAT_001cc978 int

undefined4 func_001CC900(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_001cc970;
  *param_1 = DAT_001cc970;
  param_1[200] = iVar2 + 0xb8;
  func_0036D0E0(param_1 + 0x21a);
  func_0036D0E0(param_1 + 0x219);
  iVar2 = DAT_001cc974 + 0x98;
  *param_1 = DAT_001cc974;
  param_1[200] = iVar2;
  puVar1 = func_0035D6D0(param_1 + 0x1d7);
  puVar1 = func_00503368(puVar1 + -0xb9);
  iVar2 = DAT_001cc978;
  puVar1[-0x56] = DAT_001cc978 + 0x5c;
  puVar1[-0x11e] = iVar2;
  puVar1 = func_004EE540(puVar1 + -0x1a);
  return func_001510A4(puVar1 + -0x104);
}

