#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0018c8bc;

// USA 0018C890 <- EU 0018C890 (Ghidra, non-matching)
// GLOBAL DAT_0018c8bc int

undefined4 func_0018C890(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0018c8bc;
  *param_1 = DAT_0018c8bc;
  param_1[200] = iVar1 + 0x58;
  puVar2 = func_004EE540(param_1 + 0x11e);
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

