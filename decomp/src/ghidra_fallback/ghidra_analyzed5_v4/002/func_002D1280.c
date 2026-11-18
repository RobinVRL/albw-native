#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_002d1288;

// USA 002D1280 <- EU 002D125C (Ghidra, non-matching)
// GLOBAL DAT_002d1288 int

undefined4 func_002D1280(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_002d1288;
  *param_1 = DAT_002d1288;
  param_1[200] = iVar1 + 0x54;
  param_1[0x103] = iVar1 + 0xb8;
  puVar2 = func_004EE540(param_1 + 0x114);
  return func_001510A4(puVar2 + -0x114);
}

