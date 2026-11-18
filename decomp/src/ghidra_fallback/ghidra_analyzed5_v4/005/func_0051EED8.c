#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0051ef50;
extern undefined4 *DAT_0051ef54;
extern undefined4 DAT_0051ef58;
extern uint *DAT_0051ef5c;
extern undefined4 *DAT_0051ef60;
extern undefined4 DAT_0051ef64;

// USA 0051EED8 <- EU 0051EEB0 (Ghidra, non-matching)
// GLOBAL DAT_0051ef50 uint *
// GLOBAL DAT_0051ef54 undefined4 *
// GLOBAL DAT_0051ef58 undefined4
// GLOBAL DAT_0051ef5c uint *
// GLOBAL DAT_0051ef60 undefined4 *
// GLOBAL DAT_0051ef64 undefined4

undefined4 func_0051EED8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0051ef50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ef50), iVar1 != 0)) {
    *DAT_0051ef54 = DAT_0051ef58;
  }
  if (DAT_0051ef54 != param_2) {
    if (((*DAT_0051ef5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ef5c), iVar1 != 0)) {
      *DAT_0051ef60 = DAT_0051ef64;
    }
    if (DAT_0051ef60 != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

