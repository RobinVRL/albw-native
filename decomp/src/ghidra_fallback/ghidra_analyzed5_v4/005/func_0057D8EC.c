#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057d914;
extern undefined4 *DAT_0057d918;
extern undefined4 DAT_0057d91c;

// USA 0057D8EC <- EU 0057D8C4 (Ghidra, non-matching)
// GLOBAL DAT_0057d914 uint *
// GLOBAL DAT_0057d918 undefined4 *
// GLOBAL DAT_0057d91c undefined4

bool func_0057D8EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057d914 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d914), iVar1 != 0)) {
    *DAT_0057d918 = DAT_0057d91c;
  }
  return DAT_0057d918 == param_2;
}

