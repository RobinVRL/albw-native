#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005852d4;
extern undefined4 *DAT_005852d8;
extern undefined4 DAT_005852dc;
extern uint *DAT_005852e0;
extern undefined4 *DAT_005852e4;
extern undefined4 DAT_005852e8;
extern uint *DAT_005852ec;
extern undefined4 *DAT_005852f0;
extern undefined4 DAT_005852f4;
extern uint *DAT_005852f8;
extern undefined4 *DAT_005852fc;
extern undefined4 DAT_00585300;

// USA 005851D8 <- EU 005851B0 (Ghidra, non-matching)
// GLOBAL DAT_005852d4 uint *
// GLOBAL DAT_005852d8 undefined4 *
// GLOBAL DAT_005852dc undefined4
// GLOBAL DAT_005852e0 uint *
// GLOBAL DAT_005852e4 undefined4 *
// GLOBAL DAT_005852e8 undefined4
// GLOBAL DAT_005852ec uint *
// GLOBAL DAT_005852f0 undefined4 *
// GLOBAL DAT_005852f4 undefined4
// GLOBAL DAT_005852f8 uint *
// GLOBAL DAT_005852fc undefined4 *
// GLOBAL DAT_00585300 undefined4

undefined4 func_005851D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005852d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005852d4), iVar1 != 0)) {
    *DAT_005852d8 = DAT_005852dc;
  }
  if (DAT_005852d8 != param_2) {
    if (((*DAT_005852e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005852e0), iVar1 != 0)) {
      *DAT_005852e4 = DAT_005852e8;
    }
    if (DAT_005852e4 != param_2) {
      if (((*DAT_005852ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005852ec), iVar1 != 0)) {
        *DAT_005852f0 = DAT_005852f4;
      }
      if (DAT_005852f0 != param_2) {
        if (((*DAT_005852f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005852f8), iVar1 != 0))
        {
          *DAT_005852fc = DAT_00585300;
        }
        if (DAT_005852fc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

