#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005812d4;
extern undefined4 *DAT_005812d8;
extern undefined4 DAT_005812dc;
extern uint *DAT_005812e0;
extern undefined4 *DAT_005812e4;
extern undefined4 DAT_005812e8;

// USA 00581260 <- EU 00581238 (Ghidra, non-matching)
// GLOBAL DAT_005812d4 uint *
// GLOBAL DAT_005812d8 undefined4 *
// GLOBAL DAT_005812dc undefined4
// GLOBAL DAT_005812e0 uint *
// GLOBAL DAT_005812e4 undefined4 *
// GLOBAL DAT_005812e8 undefined4

undefined4 func_00581260(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005812d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005812d4), iVar1 != 0)) {
    *DAT_005812d8 = DAT_005812dc;
  }
  if (DAT_005812d8 != param_2) {
    if (((*DAT_005812e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005812e0), iVar1 != 0)) {
      *DAT_005812e4 = DAT_005812e8;
    }
    if (DAT_005812e4 != param_2) {
      return 0;
    }
  }
  return 1;
}

