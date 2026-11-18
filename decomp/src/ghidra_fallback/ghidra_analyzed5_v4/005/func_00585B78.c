#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00585c30;
extern undefined4 *DAT_00585c34;
extern undefined4 DAT_00585c38;
extern uint *DAT_00585c3c;
extern undefined4 *DAT_00585c40;
extern undefined4 DAT_00585c44;
extern uint *DAT_00585c48;
extern undefined4 *DAT_00585c4c;
extern undefined4 DAT_00585c50;

// USA 00585B78 <- EU 00585B50 (Ghidra, non-matching)
// GLOBAL DAT_00585c30 uint *
// GLOBAL DAT_00585c34 undefined4 *
// GLOBAL DAT_00585c38 undefined4
// GLOBAL DAT_00585c3c uint *
// GLOBAL DAT_00585c40 undefined4 *
// GLOBAL DAT_00585c44 undefined4
// GLOBAL DAT_00585c48 uint *
// GLOBAL DAT_00585c4c undefined4 *
// GLOBAL DAT_00585c50 undefined4

undefined4 func_00585B78(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00585c30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585c30), iVar1 != 0)) {
    *DAT_00585c34 = DAT_00585c38;
  }
  if (DAT_00585c34 != param_2) {
    if (((*DAT_00585c3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585c3c), iVar1 != 0)) {
      *DAT_00585c40 = DAT_00585c44;
    }
    if (DAT_00585c40 != param_2) {
      if (((*DAT_00585c48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585c48), iVar1 != 0)) {
        *DAT_00585c4c = DAT_00585c50;
      }
      if (DAT_00585c4c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

