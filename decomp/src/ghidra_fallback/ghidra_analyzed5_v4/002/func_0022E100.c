#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_0022e144;
extern int DAT_0022e148;

// USA 0022E100 <- EU 0022E100 (Ghidra, non-matching)
// GLOBAL DAT_0022e144 int
// GLOBAL DAT_0022e148 int

undefined4 func_0022E100(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0022e144;
  *param_1 = DAT_0022e144;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_0036CB64(param_1 + 0x25a);
  func_0036D0E0(puVar2 + -0x2b);
  iVar1 = DAT_0022e148;
  puVar2[-0x192] = DAT_0022e148 + 0x84;
  puVar2[-0x25a] = iVar1;
  return func_001510A4(puVar2 + -0x25a);
}

