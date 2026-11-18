// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EDD04(undefined4 *param_1);
extern int iRam0050bc74;

// USA 0050BC74 <- EU 0050BC4C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL UNK_0050bc74 int

/* WARNING: Unknown calling convention */

undefined4 func_0050BC74(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = iRam0050bc74;
  *param_1 = iRam0050bc74;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EDD04(param_1 + 0x10f);
  return func_001510A4(puVar2 + -0x10f);
}

