#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_002299c8;

// USA 00229990 <- EU 00229990 (Ghidra, non-matching)
// GLOBAL DAT_002299c8 int

undefined4 func_00229990(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_002299c8;
  *param_1 = DAT_002299c8;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x189);
  puVar2 = func_004EE540(puVar2 + -0x22);
  puVar2 = func_0036CB64(puVar2 + -0x44);
  return func_001510A4(puVar2 + -0x123);
}

