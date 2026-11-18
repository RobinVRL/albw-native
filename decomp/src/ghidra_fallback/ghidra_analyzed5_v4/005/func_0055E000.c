#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e0fc;
extern undefined4 *DAT_0055e100;
extern undefined4 DAT_0055e104;
extern uint *DAT_0055e108;
extern undefined4 *DAT_0055e10c;
extern undefined4 DAT_0055e110;
extern uint *DAT_0055e114;
extern undefined4 *DAT_0055e118;
extern undefined4 DAT_0055e11c;
extern uint *DAT_0055e120;
extern undefined4 *DAT_0055e124;
extern undefined4 DAT_0055e128;

// USA 0055E000 <- EU 0055DFD8 (Ghidra, non-matching)
// GLOBAL DAT_0055e0fc uint *
// GLOBAL DAT_0055e100 undefined4 *
// GLOBAL DAT_0055e104 undefined4
// GLOBAL DAT_0055e108 uint *
// GLOBAL DAT_0055e10c undefined4 *
// GLOBAL DAT_0055e110 undefined4
// GLOBAL DAT_0055e114 uint *
// GLOBAL DAT_0055e118 undefined4 *
// GLOBAL DAT_0055e11c undefined4
// GLOBAL DAT_0055e120 uint *
// GLOBAL DAT_0055e124 undefined4 *
// GLOBAL DAT_0055e128 undefined4

undefined4 func_0055E000(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e0fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e0fc), iVar1 != 0)) {
    *DAT_0055e100 = DAT_0055e104;
  }
  if (DAT_0055e100 != param_2) {
    if (((*DAT_0055e108 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e108), iVar1 != 0)) {
      *DAT_0055e10c = DAT_0055e110;
    }
    if (DAT_0055e10c != param_2) {
      if (((*DAT_0055e114 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e114), iVar1 != 0)) {
        *DAT_0055e118 = DAT_0055e11c;
      }
      if (DAT_0055e118 != param_2) {
        if (((*DAT_0055e120 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e120), iVar1 != 0))
        {
          *DAT_0055e124 = DAT_0055e128;
        }
        if (DAT_0055e124 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

