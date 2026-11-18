#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00506768;
extern int DAT_0050676c;

// USA 00506748 <- EU 00506720 (Ghidra, non-matching)
// GLOBAL DAT_00506768 int
// GLOBAL DAT_0050676c int

undefined4 func_00506748(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00506768;
  param_1[200] = DAT_00506768 + 0x78;
  *param_1 = iVar1;
  func_0036D0E0(param_1 + 0x193);
  iVar1 = DAT_0050676c;
  param_1[200] = DAT_0050676c + 0x5c;
  *param_1 = iVar1;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

