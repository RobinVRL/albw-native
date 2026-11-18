#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0049F434(int *param_1,int param_2,undefined *param_3);
extern undefined *DAT_004b9674;

// USA 004B9660 <- EU 004B9638 (Ghidra, non-matching)
// GLOBAL DAT_004b9674 undefined *

undefined4 func_004B9660(int param_1,int param_2)

{
  undefined *puVar1;
  
  func_0010F1DC((int *)(param_1 + 0x58),(int *)(param_2 + *(int *)(param_1 + 100)));
  puVar1 = DAT_004b9674;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return func_0049F434((int *)(param_1 + 0x58),*(int *)(param_1 + 100),puVar1);
}

