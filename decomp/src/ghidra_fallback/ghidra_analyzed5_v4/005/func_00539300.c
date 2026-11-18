#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005393b8;
extern undefined4 *DAT_005393bc;
extern undefined4 DAT_005393c0;
extern uint *DAT_005393c4;
extern undefined4 *DAT_005393c8;
extern undefined4 DAT_005393cc;
extern uint *DAT_005393d0;
extern undefined4 *DAT_005393d4;
extern undefined4 DAT_005393d8;

// USA 00539300 <- EU 005392D8 (Ghidra, non-matching)
// GLOBAL DAT_005393b8 uint *
// GLOBAL DAT_005393bc undefined4 *
// GLOBAL DAT_005393c0 undefined4
// GLOBAL DAT_005393c4 uint *
// GLOBAL DAT_005393c8 undefined4 *
// GLOBAL DAT_005393cc undefined4
// GLOBAL DAT_005393d0 uint *
// GLOBAL DAT_005393d4 undefined4 *
// GLOBAL DAT_005393d8 undefined4

undefined4 func_00539300(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005393b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005393b8), iVar1 != 0)) {
    *DAT_005393bc = DAT_005393c0;
  }
  if (DAT_005393bc != param_2) {
    if (((*DAT_005393c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005393c4), iVar1 != 0)) {
      *DAT_005393c8 = DAT_005393cc;
    }
    if (DAT_005393c8 != param_2) {
      if (((*DAT_005393d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005393d0), iVar1 != 0)) {
        *DAT_005393d4 = DAT_005393d8;
      }
      if (DAT_005393d4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

