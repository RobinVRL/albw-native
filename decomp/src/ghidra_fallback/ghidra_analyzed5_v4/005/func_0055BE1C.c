#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055bed4;
extern undefined4 *DAT_0055bed8;
extern undefined4 DAT_0055bedc;
extern uint *DAT_0055bee0;
extern undefined4 *DAT_0055bee4;
extern undefined4 DAT_0055bee8;
extern uint *DAT_0055beec;
extern undefined4 *DAT_0055bef0;
extern undefined4 DAT_0055bef4;

// USA 0055BE1C <- EU 0055BDF4 (Ghidra, non-matching)
// GLOBAL DAT_0055bed4 uint *
// GLOBAL DAT_0055bed8 undefined4 *
// GLOBAL DAT_0055bedc undefined4
// GLOBAL DAT_0055bee0 uint *
// GLOBAL DAT_0055bee4 undefined4 *
// GLOBAL DAT_0055bee8 undefined4
// GLOBAL DAT_0055beec uint *
// GLOBAL DAT_0055bef0 undefined4 *
// GLOBAL DAT_0055bef4 undefined4

undefined4 func_0055BE1C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055bed4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bed4), iVar1 != 0)) {
    *DAT_0055bed8 = DAT_0055bedc;
  }
  if (DAT_0055bed8 != param_2) {
    if (((*DAT_0055bee0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bee0), iVar1 != 0)) {
      *DAT_0055bee4 = DAT_0055bee8;
    }
    if (DAT_0055bee4 != param_2) {
      if (((*DAT_0055beec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055beec), iVar1 != 0)) {
        *DAT_0055bef0 = DAT_0055bef4;
      }
      if (DAT_0055bef0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

