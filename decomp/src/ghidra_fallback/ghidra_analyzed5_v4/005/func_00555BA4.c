#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00555ca0;
extern undefined4 *DAT_00555ca4;
extern undefined4 DAT_00555ca8;
extern uint *DAT_00555cac;
extern undefined4 *DAT_00555cb0;
extern undefined4 DAT_00555cb4;
extern uint *DAT_00555cb8;
extern undefined4 *DAT_00555cbc;
extern undefined4 DAT_00555cc0;
extern uint *DAT_00555cc4;
extern undefined4 *DAT_00555cc8;
extern undefined4 DAT_00555ccc;

// USA 00555BA4 <- EU 00555B7C (Ghidra, non-matching)
// GLOBAL DAT_00555ca0 uint *
// GLOBAL DAT_00555ca4 undefined4 *
// GLOBAL DAT_00555ca8 undefined4
// GLOBAL DAT_00555cac uint *
// GLOBAL DAT_00555cb0 undefined4 *
// GLOBAL DAT_00555cb4 undefined4
// GLOBAL DAT_00555cb8 uint *
// GLOBAL DAT_00555cbc undefined4 *
// GLOBAL DAT_00555cc0 undefined4
// GLOBAL DAT_00555cc4 uint *
// GLOBAL DAT_00555cc8 undefined4 *
// GLOBAL DAT_00555ccc undefined4

undefined4 func_00555BA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00555ca0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555ca0), iVar1 != 0)) {
    *DAT_00555ca4 = DAT_00555ca8;
  }
  if (DAT_00555ca4 != param_2) {
    if (((*DAT_00555cac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555cac), iVar1 != 0)) {
      *DAT_00555cb0 = DAT_00555cb4;
    }
    if (DAT_00555cb0 != param_2) {
      if (((*DAT_00555cb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555cb8), iVar1 != 0)) {
        *DAT_00555cbc = DAT_00555cc0;
      }
      if (DAT_00555cbc != param_2) {
        if (((*DAT_00555cc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555cc4), iVar1 != 0))
        {
          *DAT_00555cc8 = DAT_00555ccc;
        }
        if (DAT_00555cc8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

