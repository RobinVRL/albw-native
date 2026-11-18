#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_001a2b78;
extern int DAT_001a2b7c;

// USA 001A2B1C <- EU 001A2B1C (Ghidra, non-matching)
// GLOBAL DAT_001a2b78 int
// GLOBAL DAT_001a2b7c int

undefined4 func_001A2B1C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001a2b78;
  *param_1 = DAT_001a2b78;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_0036CB64(param_1 + 0x232);
  func_0036D0E0(puVar2 + -1);
  func_0036D0E0(puVar2 + -2);
  func_0036D0E0(puVar2 + -3);
  iVar1 = DAT_001a2b7c;
  puVar2[-0x16a] = DAT_001a2b7c + 0x84;
  puVar2[-0x232] = iVar1;
  return func_001510A4(puVar2 + -0x232);
}

