#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_004e62e8;
extern int DAT_004e62ec;

// USA 004E62CC <- EU 004E62A4 (Ghidra, non-matching)
// GLOBAL DAT_004e62e8 int
// GLOBAL DAT_004e62ec int

undefined4 func_004E62CC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004e62e8;
  *param_1 = DAT_004e62e8;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x176);
  puVar2 = func_004EE540(puVar2 + -0x19);
  iVar1 = DAT_004e62ec;
  puVar2[-0x95] = DAT_004e62ec + 0x5c;
  puVar2[-0x15d] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x59);
  return func_001510A4(puVar2 + -0x104);
}

