#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053cad4;
extern undefined4 *DAT_0053cad8;
extern undefined4 DAT_0053cadc;
extern uint *DAT_0053cae0;
extern undefined4 *DAT_0053cae4;
extern undefined4 DAT_0053cae8;
extern uint *DAT_0053caec;
extern undefined4 *DAT_0053caf0;
extern undefined4 DAT_0053caf4;
extern uint *DAT_0053caf8;
extern undefined4 *DAT_0053cafc;
extern undefined4 DAT_0053cb00;

// USA 0053C9D8 <- EU 0053C9B0 (Ghidra, non-matching)
// GLOBAL DAT_0053cad4 uint *
// GLOBAL DAT_0053cad8 undefined4 *
// GLOBAL DAT_0053cadc undefined4
// GLOBAL DAT_0053cae0 uint *
// GLOBAL DAT_0053cae4 undefined4 *
// GLOBAL DAT_0053cae8 undefined4
// GLOBAL DAT_0053caec uint *
// GLOBAL DAT_0053caf0 undefined4 *
// GLOBAL DAT_0053caf4 undefined4
// GLOBAL DAT_0053caf8 uint *
// GLOBAL DAT_0053cafc undefined4 *
// GLOBAL DAT_0053cb00 undefined4

undefined4 func_0053C9D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053cad4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cad4), iVar1 != 0)) {
    *DAT_0053cad8 = DAT_0053cadc;
  }
  if (DAT_0053cad8 != param_2) {
    if (((*DAT_0053cae0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cae0), iVar1 != 0)) {
      *DAT_0053cae4 = DAT_0053cae8;
    }
    if (DAT_0053cae4 != param_2) {
      if (((*DAT_0053caec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053caec), iVar1 != 0)) {
        *DAT_0053caf0 = DAT_0053caf4;
      }
      if (DAT_0053caf0 != param_2) {
        if (((*DAT_0053caf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053caf8), iVar1 != 0))
        {
          *DAT_0053cafc = DAT_0053cb00;
        }
        if (DAT_0053cafc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

