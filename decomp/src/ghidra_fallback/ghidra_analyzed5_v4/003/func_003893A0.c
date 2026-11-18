#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EDD04(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_003893b8;
extern int DAT_003893bc;

// USA 003893A0 <- EU 0038937C (Ghidra, non-matching)
// GLOBAL DAT_003893b8 int
// GLOBAL DAT_003893bc int

undefined4 func_003893A0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_003893b8;
  *param_1 = DAT_003893b8;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EDD04(param_1 + 0x121);
  iVar1 = DAT_003893bc;
  puVar2[-0x59] = DAT_003893bc + 0x5c;
  puVar2[-0x121] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1d);
  return func_001510A4(puVar2 + -0x104);
}

