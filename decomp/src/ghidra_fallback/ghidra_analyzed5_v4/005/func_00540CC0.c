#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00540d78;
extern undefined4 *DAT_00540d7c;
extern undefined4 DAT_00540d80;
extern uint *DAT_00540d84;
extern undefined4 *DAT_00540d88;
extern undefined4 DAT_00540d8c;
extern uint *DAT_00540d90;
extern undefined4 *DAT_00540d94;
extern undefined4 DAT_00540d98;

// USA 00540CC0 <- EU 00540C98 (Ghidra, non-matching)
// GLOBAL DAT_00540d78 uint *
// GLOBAL DAT_00540d7c undefined4 *
// GLOBAL DAT_00540d80 undefined4
// GLOBAL DAT_00540d84 uint *
// GLOBAL DAT_00540d88 undefined4 *
// GLOBAL DAT_00540d8c undefined4
// GLOBAL DAT_00540d90 uint *
// GLOBAL DAT_00540d94 undefined4 *
// GLOBAL DAT_00540d98 undefined4

undefined4 func_00540CC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00540d78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540d78), iVar1 != 0)) {
    *DAT_00540d7c = DAT_00540d80;
  }
  if (DAT_00540d7c != param_2) {
    if (((*DAT_00540d84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540d84), iVar1 != 0)) {
      *DAT_00540d88 = DAT_00540d8c;
    }
    if (DAT_00540d88 != param_2) {
      if (((*DAT_00540d90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540d90), iVar1 != 0)) {
        *DAT_00540d94 = DAT_00540d98;
      }
      if (DAT_00540d94 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

