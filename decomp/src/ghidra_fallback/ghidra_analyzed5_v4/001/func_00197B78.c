#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EDD04(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00197bb4;
extern int DAT_00197bb8;

// USA 00197B78 <- EU 00197B78 (Ghidra, non-matching)
// GLOBAL DAT_00197bb4 int
// GLOBAL DAT_00197bb8 int

undefined4 func_00197B78(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00197bb4;
  *param_1 = DAT_00197bb4;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EDD04(param_1 + 0x12d);
  iVar1 = DAT_00197bb8;
  puVar2[-0x65] = DAT_00197bb8 + 0x5c;
  puVar2[-0x12d] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x29);
  return func_001510A4(puVar2 + -0x104);
}

