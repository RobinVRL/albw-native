#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EDD04(undefined4 *param_1);
extern int DAT_002078c8;
extern int DAT_002078cc;

// USA 00207898 <- EU 00207898 (Ghidra, non-matching)
// GLOBAL DAT_002078c8 int
// GLOBAL DAT_002078cc int

undefined4 func_00207898(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_002078c8;
  *param_1 = DAT_002078c8;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_004EDD04(param_1 + 0x253);
  iVar1 = DAT_002078cc;
  puVar2[-0x18b] = DAT_002078cc + 0x84;
  puVar2[-0x253] = iVar1;
  return func_001510A4(puVar2 + -0x253);
}

