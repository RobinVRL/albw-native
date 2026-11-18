#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00544ab8;
extern undefined4 *DAT_00544abc;
extern undefined4 DAT_00544ac0;
extern uint *DAT_00544ac4;
extern undefined4 *DAT_00544ac8;
extern undefined4 DAT_00544acc;
extern uint *DAT_00544ad0;
extern undefined4 *DAT_00544ad4;
extern undefined4 DAT_00544ad8;

// USA 00544A00 <- EU 005449D8 (Ghidra, non-matching)
// GLOBAL DAT_00544ab8 uint *
// GLOBAL DAT_00544abc undefined4 *
// GLOBAL DAT_00544ac0 undefined4
// GLOBAL DAT_00544ac4 uint *
// GLOBAL DAT_00544ac8 undefined4 *
// GLOBAL DAT_00544acc undefined4
// GLOBAL DAT_00544ad0 uint *
// GLOBAL DAT_00544ad4 undefined4 *
// GLOBAL DAT_00544ad8 undefined4

undefined4 func_00544A00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00544ab8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544ab8), iVar1 != 0)) {
    *DAT_00544abc = DAT_00544ac0;
  }
  if (DAT_00544abc != param_2) {
    if (((*DAT_00544ac4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544ac4), iVar1 != 0)) {
      *DAT_00544ac8 = DAT_00544acc;
    }
    if (DAT_00544ac8 != param_2) {
      if (((*DAT_00544ad0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544ad0), iVar1 != 0)) {
        *DAT_00544ad4 = DAT_00544ad8;
      }
      if (DAT_00544ad4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

