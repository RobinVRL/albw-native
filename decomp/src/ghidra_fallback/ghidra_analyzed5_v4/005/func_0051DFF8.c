#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051e0f4;
extern undefined4 *DAT_0051e0f8;
extern undefined4 DAT_0051e0fc;
extern uint *DAT_0051e100;
extern undefined4 *DAT_0051e104;
extern undefined4 DAT_0051e108;
extern uint *DAT_0051e10c;
extern undefined4 *DAT_0051e110;
extern undefined4 DAT_0051e114;
extern uint *DAT_0051e118;
extern undefined4 *DAT_0051e11c;
extern undefined4 DAT_0051e120;

// USA 0051DFF8 <- EU 0051DFD0 (Ghidra, non-matching)
// GLOBAL DAT_0051e0f4 uint *
// GLOBAL DAT_0051e0f8 undefined4 *
// GLOBAL DAT_0051e0fc undefined4
// GLOBAL DAT_0051e100 uint *
// GLOBAL DAT_0051e104 undefined4 *
// GLOBAL DAT_0051e108 undefined4
// GLOBAL DAT_0051e10c uint *
// GLOBAL DAT_0051e110 undefined4 *
// GLOBAL DAT_0051e114 undefined4
// GLOBAL DAT_0051e118 uint *
// GLOBAL DAT_0051e11c undefined4 *
// GLOBAL DAT_0051e120 undefined4

undefined4 func_0051DFF8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051e0f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e0f4), iVar1 != 0)) {
    *DAT_0051e0f8 = DAT_0051e0fc;
  }
  if (DAT_0051e0f8 != param_2) {
    if (((*DAT_0051e100 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e100), iVar1 != 0)) {
      *DAT_0051e104 = DAT_0051e108;
    }
    if (DAT_0051e104 != param_2) {
      if (((*DAT_0051e10c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e10c), iVar1 != 0)) {
        *DAT_0051e110 = DAT_0051e114;
      }
      if (DAT_0051e110 != param_2) {
        if (((*DAT_0051e118 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e118), iVar1 != 0))
        {
          *DAT_0051e11c = DAT_0051e120;
        }
        if (DAT_0051e11c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

