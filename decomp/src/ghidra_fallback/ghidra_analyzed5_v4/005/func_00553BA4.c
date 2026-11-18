#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00553ca0;
extern undefined4 *DAT_00553ca4;
extern undefined4 DAT_00553ca8;
extern uint *DAT_00553cac;
extern undefined4 *DAT_00553cb0;
extern undefined4 DAT_00553cb4;
extern uint *DAT_00553cb8;
extern undefined4 *DAT_00553cbc;
extern undefined4 DAT_00553cc0;
extern uint *DAT_00553cc4;
extern undefined4 *DAT_00553cc8;
extern undefined4 DAT_00553ccc;

// USA 00553BA4 <- EU 00553B7C (Ghidra, non-matching)
// GLOBAL DAT_00553ca0 uint *
// GLOBAL DAT_00553ca4 undefined4 *
// GLOBAL DAT_00553ca8 undefined4
// GLOBAL DAT_00553cac uint *
// GLOBAL DAT_00553cb0 undefined4 *
// GLOBAL DAT_00553cb4 undefined4
// GLOBAL DAT_00553cb8 uint *
// GLOBAL DAT_00553cbc undefined4 *
// GLOBAL DAT_00553cc0 undefined4
// GLOBAL DAT_00553cc4 uint *
// GLOBAL DAT_00553cc8 undefined4 *
// GLOBAL DAT_00553ccc undefined4

undefined4 func_00553BA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00553ca0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553ca0), iVar1 != 0)) {
    *DAT_00553ca4 = DAT_00553ca8;
  }
  if (DAT_00553ca4 != param_2) {
    if (((*DAT_00553cac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553cac), iVar1 != 0)) {
      *DAT_00553cb0 = DAT_00553cb4;
    }
    if (DAT_00553cb0 != param_2) {
      if (((*DAT_00553cb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553cb8), iVar1 != 0)) {
        *DAT_00553cbc = DAT_00553cc0;
      }
      if (DAT_00553cbc != param_2) {
        if (((*DAT_00553cc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553cc4), iVar1 != 0))
        {
          *DAT_00553cc8 = DAT_00553ccc;
        }
        if (DAT_00553cc8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

