#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00553894;
extern undefined4 *DAT_00553898;
extern undefined4 DAT_0055389c;
extern uint *DAT_005538a0;
extern undefined4 *DAT_005538a4;
extern undefined4 DAT_005538a8;

// USA 00553820 <- EU 005537F8 (Ghidra, non-matching)
// GLOBAL DAT_00553894 uint *
// GLOBAL DAT_00553898 undefined4 *
// GLOBAL DAT_0055389c undefined4
// GLOBAL DAT_005538a0 uint *
// GLOBAL DAT_005538a4 undefined4 *
// GLOBAL DAT_005538a8 undefined4

undefined4 func_00553820(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00553894 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553894), iVar1 != 0)) {
    *DAT_00553898 = DAT_0055389c;
  }
  if (DAT_00553898 != param_2) {
    if (((*DAT_005538a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005538a0), iVar1 != 0)) {
      *DAT_005538a4 = DAT_005538a8;
    }
    if (DAT_005538a4 != param_2) {
      return 0;
    }
  }
  return 1;
}

