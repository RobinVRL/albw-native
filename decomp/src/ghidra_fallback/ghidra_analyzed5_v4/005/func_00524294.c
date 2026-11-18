#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052434c;
extern undefined4 *DAT_00524350;
extern undefined4 DAT_00524354;
extern uint *DAT_00524358;
extern undefined4 *DAT_0052435c;
extern undefined4 DAT_00524360;
extern uint *DAT_00524364;
extern undefined4 *DAT_00524368;
extern undefined4 DAT_0052436c;

// USA 00524294 <- EU 0052426C (Ghidra, non-matching)
// GLOBAL DAT_0052434c uint *
// GLOBAL DAT_00524350 undefined4 *
// GLOBAL DAT_00524354 undefined4
// GLOBAL DAT_00524358 uint *
// GLOBAL DAT_0052435c undefined4 *
// GLOBAL DAT_00524360 undefined4
// GLOBAL DAT_00524364 uint *
// GLOBAL DAT_00524368 undefined4 *
// GLOBAL DAT_0052436c undefined4

undefined4 func_00524294(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052434c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052434c), iVar1 != 0)) {
    *DAT_00524350 = DAT_00524354;
  }
  if (DAT_00524350 != param_2) {
    if (((*DAT_00524358 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524358), iVar1 != 0)) {
      *DAT_0052435c = DAT_00524360;
    }
    if (DAT_0052435c != param_2) {
      if (((*DAT_00524364 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524364), iVar1 != 0)) {
        *DAT_00524368 = DAT_0052436c;
      }
      if (DAT_00524368 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

