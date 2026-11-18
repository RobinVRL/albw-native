#include "ghidra_types.h"

extern undefined4 DAT_004b9ae8;
extern int DAT_004b9aec;

// USA 004B9AF4 <- EU 004B9ACC (Ghidra, non-matching)
// GLOBAL DAT_004b9ae8 undefined4
// GLOBAL DAT_004b9aec int

undefined4 * func_004B9AF4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_004b9aec + param_2 * 8;
  *param_1 = DAT_004b9ae8;
  param_1[1] = *(undefined4 *)(iVar1 + 4);
  return param_1;
}

