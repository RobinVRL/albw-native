#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_0026c0a0;
extern int DAT_0026c0a4;

// USA 0026C01C <- EU 0026C044 (Ghidra, non-matching)
// GLOBAL DAT_0026c0a0 int
// GLOBAL DAT_0026c0a4 int

undefined4 func_0026C01C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0026c0a0;
  *param_1 = DAT_0026c0a0;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_0036CB64(param_1 + 0x26b);
  func_0036D0E0(puVar2 + -0x3a);
  func_0036D0E0(puVar2 + -0x3b);
  func_0036D0E0(puVar2 + -0x3c);
  iVar1 = DAT_0026c0a4;
  puVar2[-0x1a3] = DAT_0026c0a4 + 0x84;
  puVar2[-0x26b] = iVar1;
  return func_001510A4(puVar2 + -0x26b);
}

