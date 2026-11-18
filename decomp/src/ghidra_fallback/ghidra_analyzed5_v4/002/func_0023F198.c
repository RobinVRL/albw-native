#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_0023f1dc;
extern int DAT_0023f1e0;

// USA 0023F198 <- EU 0023F198 (Ghidra, non-matching)
// GLOBAL DAT_0023f1dc int
// GLOBAL DAT_0023f1e0 int

undefined4 func_0023F198(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0023f1dc;
  *param_1 = DAT_0023f1dc;
  param_1[200] = iVar1 + 0x98;
  puVar2 = func_0035D6D0(param_1 + 0x1d7);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_0023f1e0;
  puVar2[-0x56] = DAT_0023f1e0 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

