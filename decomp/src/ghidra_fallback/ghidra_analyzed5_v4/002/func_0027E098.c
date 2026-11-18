#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EDD04(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0027e0ec;

// USA 0027E098 <- EU 0027E0C0 (Ghidra, non-matching)
// GLOBAL DAT_0027e0ec int

undefined4 func_0027E098(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0027e0ec;
  *param_1 = DAT_0027e0ec;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EDD04(param_1 + 0x132);
  puVar2 = func_004EE540(puVar2 + -0x1e);
  return func_001510A4(puVar2 + -0x114);
}

