#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00610AB4(undefined4 *param_1);
extern uint *DAT_005456e8;
extern undefined4 *DAT_005456ec;
extern undefined4 DAT_005456f0;
extern uint *DAT_005456f4;
extern undefined4 *DAT_005456f8;
extern undefined4 DAT_005456fc;

// USA 00545670 <- EU 00545648 (Ghidra, non-matching)
// GLOBAL DAT_005456e8 uint *
// GLOBAL DAT_005456ec undefined4 *
// GLOBAL DAT_005456f0 undefined4
// GLOBAL DAT_005456f4 uint *
// GLOBAL DAT_005456f8 undefined4 *
// GLOBAL DAT_005456fc undefined4

undefined4 func_00545670(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005456e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005456e8), iVar1 != 0)) {
    *DAT_005456ec = DAT_005456f0;
  }
  if (DAT_005456ec != param_2) {
    if (((*DAT_005456f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005456f4), iVar1 != 0)) {
      *DAT_005456f8 = DAT_005456fc;
    }
    if (DAT_005456f8 != param_2) {
      uVar2 = func_00610AB4(param_2);
      return uVar2;
    }
  }
  return 1;
}

