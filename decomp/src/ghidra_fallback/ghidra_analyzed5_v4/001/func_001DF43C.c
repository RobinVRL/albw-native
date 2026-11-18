#include "ghidra_types.h"

extern int func_0014A0E8(int param_1,undefined4 param_2);
extern int func_001510A4();
extern int DAT_001df470;
extern int *DAT_001df474;

// USA 001DF43C <- EU 001DF43C (Ghidra, non-matching)
// GLOBAL DAT_001df470 int
// GLOBAL DAT_001df474 int *

undefined4 func_001DF43C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001df470;
  param_1[200] = DAT_001df470 + 0x5c;
  *param_1 = iVar1;
  func_0014A0E8(*DAT_001df474,0);
  return func_001510A4(param_1);
}

