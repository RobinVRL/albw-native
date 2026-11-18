#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559478;
extern undefined4 *DAT_0055947c;
extern undefined4 DAT_00559480;
extern uint *DAT_00559484;
extern undefined4 *DAT_00559488;
extern undefined4 DAT_0055948c;

// USA 00559404 <- EU 005593DC (Ghidra, non-matching)
// GLOBAL DAT_00559478 uint *
// GLOBAL DAT_0055947c undefined4 *
// GLOBAL DAT_00559480 undefined4
// GLOBAL DAT_00559484 uint *
// GLOBAL DAT_00559488 undefined4 *
// GLOBAL DAT_0055948c undefined4

undefined4 func_00559404(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559478 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559478), iVar1 != 0)) {
    *DAT_0055947c = DAT_00559480;
  }
  if (DAT_0055947c != param_2) {
    if (((*DAT_00559484 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559484), iVar1 != 0)) {
      *DAT_00559488 = DAT_0055948c;
    }
    if (DAT_00559488 != param_2) {
      return 0;
    }
  }
  return 1;
}

