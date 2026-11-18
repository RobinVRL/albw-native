#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053ef84;
extern undefined4 *DAT_0053ef88;
extern undefined4 DAT_0053ef8c;
extern uint *DAT_0053ef90;
extern undefined4 *DAT_0053ef94;
extern undefined4 DAT_0053ef98;

// USA 0053EF10 <- EU 0053EEE8 (Ghidra, non-matching)
// GLOBAL DAT_0053ef84 uint *
// GLOBAL DAT_0053ef88 undefined4 *
// GLOBAL DAT_0053ef8c undefined4
// GLOBAL DAT_0053ef90 uint *
// GLOBAL DAT_0053ef94 undefined4 *
// GLOBAL DAT_0053ef98 undefined4

undefined4 func_0053EF10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053ef84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ef84), iVar1 != 0)) {
    *DAT_0053ef88 = DAT_0053ef8c;
  }
  if (DAT_0053ef88 != param_2) {
    if (((*DAT_0053ef90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ef90), iVar1 != 0)) {
      *DAT_0053ef94 = DAT_0053ef98;
    }
    if (DAT_0053ef94 != param_2) {
      return 0;
    }
  }
  return 1;
}

