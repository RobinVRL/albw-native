#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00527430;
extern undefined4 *DAT_00527434;
extern undefined4 DAT_00527438;
extern uint *DAT_0052743c;
extern undefined4 *DAT_00527440;
extern undefined4 DAT_00527444;
extern uint *DAT_00527448;
extern undefined4 *DAT_0052744c;
extern undefined4 DAT_00527450;
extern uint *DAT_00527454;
extern undefined4 *DAT_00527458;
extern undefined4 DAT_0052745c;

// USA 00527334 <- EU 0052730C (Ghidra, non-matching)
// GLOBAL DAT_00527430 uint *
// GLOBAL DAT_00527434 undefined4 *
// GLOBAL DAT_00527438 undefined4
// GLOBAL DAT_0052743c uint *
// GLOBAL DAT_00527440 undefined4 *
// GLOBAL DAT_00527444 undefined4
// GLOBAL DAT_00527448 uint *
// GLOBAL DAT_0052744c undefined4 *
// GLOBAL DAT_00527450 undefined4
// GLOBAL DAT_00527454 uint *
// GLOBAL DAT_00527458 undefined4 *
// GLOBAL DAT_0052745c undefined4

undefined4 func_00527334(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00527430 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527430), iVar1 != 0)) {
    *DAT_00527434 = DAT_00527438;
  }
  if (DAT_00527434 != param_2) {
    if (((*DAT_0052743c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052743c), iVar1 != 0)) {
      *DAT_00527440 = DAT_00527444;
    }
    if (DAT_00527440 != param_2) {
      if (((*DAT_00527448 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527448), iVar1 != 0)) {
        *DAT_0052744c = DAT_00527450;
      }
      if (DAT_0052744c != param_2) {
        if (((*DAT_00527454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527454), iVar1 != 0))
        {
          *DAT_00527458 = DAT_0052745c;
        }
        if (DAT_00527458 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

