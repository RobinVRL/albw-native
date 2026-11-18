#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068cac4;
extern undefined4 *DAT_0068cac8;
extern undefined4 DAT_0068cacc;
extern uint *DAT_0068cad0;
extern undefined4 *DAT_0068cad4;
extern undefined4 DAT_0068cad8;

// USA 0068CA4C <- EU 0068CA24 (Ghidra, non-matching)
// GLOBAL DAT_0068cac4 uint *
// GLOBAL DAT_0068cac8 undefined4 *
// GLOBAL DAT_0068cacc undefined4
// GLOBAL DAT_0068cad0 uint *
// GLOBAL DAT_0068cad4 undefined4 *
// GLOBAL DAT_0068cad8 undefined4

undefined4 func_0068CA4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068cac4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cac4), iVar1 != 0)) {
    *DAT_0068cac8 = DAT_0068cacc;
  }
  if (DAT_0068cac8 != param_2) {
    if (((*DAT_0068cad0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cad0), iVar1 != 0)) {
      *DAT_0068cad4 = DAT_0068cad8;
    }
    if (DAT_0068cad4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

