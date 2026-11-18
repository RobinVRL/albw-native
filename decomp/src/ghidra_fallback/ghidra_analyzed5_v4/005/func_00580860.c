#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00580888;
extern undefined4 *DAT_0058088c;
extern undefined4 DAT_00580890;

// USA 00580860 <- EU 00580838 (Ghidra, non-matching)
// GLOBAL DAT_00580888 uint *
// GLOBAL DAT_0058088c undefined4 *
// GLOBAL DAT_00580890 undefined4

bool func_00580860(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00580888 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580888), iVar1 != 0)) {
    *DAT_0058088c = DAT_00580890;
  }
  return DAT_0058088c == param_2;
}

