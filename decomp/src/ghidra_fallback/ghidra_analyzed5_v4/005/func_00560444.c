#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005604fc;
extern undefined4 *DAT_00560500;
extern undefined4 DAT_00560504;
extern uint *DAT_00560508;
extern undefined4 *DAT_0056050c;
extern undefined4 DAT_00560510;
extern uint *DAT_00560514;
extern undefined4 *DAT_00560518;
extern undefined4 DAT_0056051c;

// USA 00560444 <- EU 0056041C (Ghidra, non-matching)
// GLOBAL DAT_005604fc uint *
// GLOBAL DAT_00560500 undefined4 *
// GLOBAL DAT_00560504 undefined4
// GLOBAL DAT_00560508 uint *
// GLOBAL DAT_0056050c undefined4 *
// GLOBAL DAT_00560510 undefined4
// GLOBAL DAT_00560514 uint *
// GLOBAL DAT_00560518 undefined4 *
// GLOBAL DAT_0056051c undefined4

undefined4 func_00560444(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005604fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005604fc), iVar1 != 0)) {
    *DAT_00560500 = DAT_00560504;
  }
  if (DAT_00560500 != param_2) {
    if (((*DAT_00560508 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560508), iVar1 != 0)) {
      *DAT_0056050c = DAT_00560510;
    }
    if (DAT_0056050c != param_2) {
      if (((*DAT_00560514 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560514), iVar1 != 0)) {
        *DAT_00560518 = DAT_0056051c;
      }
      if (DAT_00560518 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

