#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002BEA00(undefined4 *param_1);
extern int func_004EDD04(undefined4 *param_1);
extern int DAT_0031b1f8;

// USA 0031B1E4 <- EU 0031B1C0 (Ghidra, non-matching)
// GLOBAL DAT_0031b1f8 int

undefined4 func_0031B1E4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0031b1f8;
  *param_1 = DAT_0031b1f8;
  param_1[200] = iVar1 + 0x54;
  param_1[0x103] = iVar1 + 0xb8;
  puVar2 = func_004EDD04(param_1 + 0x1d2);
  puVar2 = func_002BEA00(puVar2 + -0xb3);
  return func_001510A4(puVar2 + -0x11f);
}

