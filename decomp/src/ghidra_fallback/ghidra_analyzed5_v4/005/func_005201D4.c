#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052028c;
extern undefined4 *DAT_00520290;
extern undefined4 DAT_00520294;
extern uint *DAT_00520298;
extern undefined4 *DAT_0052029c;
extern undefined4 DAT_005202a0;
extern uint *DAT_005202a4;
extern undefined4 *DAT_005202a8;
extern undefined4 DAT_005202ac;

// USA 005201D4 <- EU 005201AC (Ghidra, non-matching)
// GLOBAL DAT_0052028c uint *
// GLOBAL DAT_00520290 undefined4 *
// GLOBAL DAT_00520294 undefined4
// GLOBAL DAT_00520298 uint *
// GLOBAL DAT_0052029c undefined4 *
// GLOBAL DAT_005202a0 undefined4
// GLOBAL DAT_005202a4 uint *
// GLOBAL DAT_005202a8 undefined4 *
// GLOBAL DAT_005202ac undefined4

undefined4 func_005201D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052028c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052028c), iVar1 != 0)) {
    *DAT_00520290 = DAT_00520294;
  }
  if (DAT_00520290 != param_2) {
    if (((*DAT_00520298 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520298), iVar1 != 0)) {
      *DAT_0052029c = DAT_005202a0;
    }
    if (DAT_0052029c != param_2) {
      if (((*DAT_005202a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005202a4), iVar1 != 0)) {
        *DAT_005202a8 = DAT_005202ac;
      }
      if (DAT_005202a8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

