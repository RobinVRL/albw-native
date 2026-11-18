#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00238304;
extern int DAT_00238308;

// USA 002382C0 <- EU 002382C0 (Ghidra, non-matching)
// GLOBAL DAT_00238304 int
// GLOBAL DAT_00238308 int

undefined4 func_002382C0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00238304;
  param_1[200] = DAT_00238304 + 0x78;
  *param_1 = iVar1;
  func_0036D0E0(param_1 + 0x1a0);
  iVar1 = DAT_00238308;
  param_1[200] = DAT_00238308 + 0x5c;
  *param_1 = iVar1;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

