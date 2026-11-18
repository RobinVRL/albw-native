#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_002a8bc8;
extern int DAT_002a8bcc;

// USA 002A8B9C <- EU 002A8B78 (Ghidra, non-matching)
// GLOBAL DAT_002a8bc8 int
// GLOBAL DAT_002a8bcc int

undefined4 func_002A8B9C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_002a8bc8;
  *param_1 = DAT_002a8bc8;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_0036CB64(param_1 + 0x235);
  func_0036D0E0(puVar2 + -1);
  func_0036D0E0(puVar2 + -2);
  iVar1 = DAT_002a8bcc;
  puVar2[-0x235] = DAT_002a8bcc;
  puVar2[-0x16d] = iVar1 + 0x84;
  return func_001510A4(puVar2 + -0x235);
}

