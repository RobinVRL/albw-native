#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_00210d00;
extern int DAT_00210d04;

// USA 00210CAC <- EU 00210CAC (Ghidra, non-matching)
// GLOBAL DAT_00210d00 int
// GLOBAL DAT_00210d04 int

undefined4 func_00210CAC(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00210d00 + 0x84;
  *param_1 = DAT_00210d00;
  param_1[200] = iVar2;
  func_0036D0E0(param_1 + 0x35d);
  func_0036D0E0(param_1 + 0x352);
  puVar1 = func_0036CB64(param_1 + 0x29f);
  iVar2 = DAT_00210d04;
  puVar1[-0x1d7] = DAT_00210d04 + 0x84;
  puVar1[-0x29f] = iVar2;
  return func_001510A4(puVar1 + -0x29f);
}

