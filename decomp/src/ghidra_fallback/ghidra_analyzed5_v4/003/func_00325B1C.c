#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00325c1c;
extern undefined4 *DAT_00325c20;
extern undefined4 DAT_00325c24;
extern uint *DAT_00325c28;
extern undefined4 *DAT_00325c2c;
extern undefined4 DAT_00325c30;
extern uint *DAT_00325c34;
extern undefined4 *DAT_00325c38;
extern undefined4 DAT_00325c3c;
extern uint *DAT_00325c40;
extern undefined4 *DAT_00325c44;
extern undefined4 DAT_00325c48;

// USA 00325B1C <- EU 00325AF8 (Ghidra, non-matching)
// GLOBAL DAT_00325c1c uint *
// GLOBAL DAT_00325c20 undefined4 *
// GLOBAL DAT_00325c24 undefined4
// GLOBAL DAT_00325c28 uint *
// GLOBAL DAT_00325c2c undefined4 *
// GLOBAL DAT_00325c30 undefined4
// GLOBAL DAT_00325c34 uint *
// GLOBAL DAT_00325c38 undefined4 *
// GLOBAL DAT_00325c3c undefined4
// GLOBAL DAT_00325c40 uint *
// GLOBAL DAT_00325c44 undefined4 *
// GLOBAL DAT_00325c48 undefined4

undefined4 func_00325B1C(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00325c1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00325c1c), iVar1 != 0)) {
    *DAT_00325c20 = DAT_00325c24;
  }
  if (DAT_00325c20 != param_1) {
    if (((*DAT_00325c28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00325c28), iVar1 != 0)) {
      *DAT_00325c2c = DAT_00325c30;
    }
    if (DAT_00325c2c != param_1) {
      if (((*DAT_00325c34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00325c34), iVar1 != 0)) {
        *DAT_00325c38 = DAT_00325c3c;
      }
      if (DAT_00325c38 != param_1) {
        if (((*DAT_00325c40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00325c40), iVar1 != 0))
        {
          *DAT_00325c44 = DAT_00325c48;
        }
        if (DAT_00325c44 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

