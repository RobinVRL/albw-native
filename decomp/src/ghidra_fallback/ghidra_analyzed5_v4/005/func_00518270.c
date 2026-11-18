#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004A3700(int param_1);
extern int DAT_005182a4;

// USA 00518270 <- EU 00518248 (Ghidra, non-matching)
// GLOBAL DAT_005182a4 int

undefined4 func_00518270(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_005182a4 + 0x54;
  *param_1 = DAT_005182a4;
  param_1[200] = iVar1;
  iVar1 = param_1[0x321];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x322])) {
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar1);
  }
  return func_001510A4(param_1);
}

