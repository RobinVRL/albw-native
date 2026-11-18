#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_00357ce0;
extern int DAT_00357ce4;

// USA 00357CC0 <- EU 00357C9C (Ghidra, non-matching)
// GLOBAL DAT_00357ce0 int
// GLOBAL DAT_00357ce4 int

undefined4 func_00357CC0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00357ce0;
  *param_1 = DAT_00357ce0;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_0036CB64(param_1 + 0x232);
  func_0036D0E0(puVar2 + -3);
  iVar1 = DAT_00357ce4;
  puVar2[-0x16a] = DAT_00357ce4 + 0x84;
  puVar2[-0x232] = iVar1;
  return func_001510A4(puVar2 + -0x232);
}

