#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053cc28;
extern undefined4 *DAT_0053cc2c;
extern undefined4 DAT_0053cc30;
extern uint *DAT_0053cc34;
extern undefined4 *DAT_0053cc38;
extern undefined4 DAT_0053cc3c;
extern uint *DAT_0053cc40;
extern undefined4 *DAT_0053cc44;
extern undefined4 DAT_0053cc48;
extern uint *DAT_0053cc4c;
extern undefined4 *DAT_0053cc50;
extern undefined4 DAT_0053cc54;

// USA 0053CB2C <- EU 0053CB04 (Ghidra, non-matching)
// GLOBAL DAT_0053cc28 uint *
// GLOBAL DAT_0053cc2c undefined4 *
// GLOBAL DAT_0053cc30 undefined4
// GLOBAL DAT_0053cc34 uint *
// GLOBAL DAT_0053cc38 undefined4 *
// GLOBAL DAT_0053cc3c undefined4
// GLOBAL DAT_0053cc40 uint *
// GLOBAL DAT_0053cc44 undefined4 *
// GLOBAL DAT_0053cc48 undefined4
// GLOBAL DAT_0053cc4c uint *
// GLOBAL DAT_0053cc50 undefined4 *
// GLOBAL DAT_0053cc54 undefined4

undefined4 func_0053CB2C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053cc28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cc28), iVar1 != 0)) {
    *DAT_0053cc2c = DAT_0053cc30;
  }
  if (DAT_0053cc2c != param_2) {
    if (((*DAT_0053cc34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cc34), iVar1 != 0)) {
      *DAT_0053cc38 = DAT_0053cc3c;
    }
    if (DAT_0053cc38 != param_2) {
      if (((*DAT_0053cc40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cc40), iVar1 != 0)) {
        *DAT_0053cc44 = DAT_0053cc48;
      }
      if (DAT_0053cc44 != param_2) {
        if (((*DAT_0053cc4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cc4c), iVar1 != 0))
        {
          *DAT_0053cc50 = DAT_0053cc54;
        }
        if (DAT_0053cc50 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

