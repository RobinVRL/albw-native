#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0058c5f0;
extern undefined4 *DAT_0058c5f4;
extern undefined4 DAT_0058c5f8;
extern uint *DAT_0058c5fc;
extern undefined4 *DAT_0058c600;
extern undefined4 DAT_0058c604;

// USA 0058C578 <- EU 0058C550 (Ghidra, non-matching)
// GLOBAL DAT_0058c5f0 uint *
// GLOBAL DAT_0058c5f4 undefined4 *
// GLOBAL DAT_0058c5f8 undefined4
// GLOBAL DAT_0058c5fc uint *
// GLOBAL DAT_0058c600 undefined4 *
// GLOBAL DAT_0058c604 undefined4

undefined4 func_0058C578(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0058c5f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c5f0), iVar1 != 0)) {
    *DAT_0058c5f4 = DAT_0058c5f8;
  }
  if (DAT_0058c5f4 != param_2) {
    if (((*DAT_0058c5fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c5fc), iVar1 != 0)) {
      *DAT_0058c600 = DAT_0058c604;
    }
    if (DAT_0058c600 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

