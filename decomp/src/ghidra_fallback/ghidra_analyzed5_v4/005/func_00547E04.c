#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00547ebc;
extern undefined4 *DAT_00547ec0;
extern undefined4 DAT_00547ec4;
extern uint *DAT_00547ec8;
extern undefined4 *DAT_00547ecc;
extern undefined4 DAT_00547ed0;
extern uint *DAT_00547ed4;
extern undefined4 *DAT_00547ed8;
extern undefined4 DAT_00547edc;

// USA 00547E04 <- EU 00547DDC (Ghidra, non-matching)
// GLOBAL DAT_00547ebc uint *
// GLOBAL DAT_00547ec0 undefined4 *
// GLOBAL DAT_00547ec4 undefined4
// GLOBAL DAT_00547ec8 uint *
// GLOBAL DAT_00547ecc undefined4 *
// GLOBAL DAT_00547ed0 undefined4
// GLOBAL DAT_00547ed4 uint *
// GLOBAL DAT_00547ed8 undefined4 *
// GLOBAL DAT_00547edc undefined4

undefined4 func_00547E04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00547ebc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547ebc), iVar1 != 0)) {
    *DAT_00547ec0 = DAT_00547ec4;
  }
  if (DAT_00547ec0 != param_2) {
    if (((*DAT_00547ec8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547ec8), iVar1 != 0)) {
      *DAT_00547ecc = DAT_00547ed0;
    }
    if (DAT_00547ecc != param_2) {
      if (((*DAT_00547ed4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547ed4), iVar1 != 0)) {
        *DAT_00547ed8 = DAT_00547edc;
      }
      if (DAT_00547ed8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

