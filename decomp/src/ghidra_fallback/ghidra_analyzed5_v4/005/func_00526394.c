#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052644c;
extern undefined4 *DAT_00526450;
extern undefined4 DAT_00526454;
extern uint *DAT_00526458;
extern undefined4 *DAT_0052645c;
extern undefined4 DAT_00526460;
extern uint *DAT_00526464;
extern undefined4 *DAT_00526468;
extern undefined4 DAT_0052646c;

// USA 00526394 <- EU 0052636C (Ghidra, non-matching)
// GLOBAL DAT_0052644c uint *
// GLOBAL DAT_00526450 undefined4 *
// GLOBAL DAT_00526454 undefined4
// GLOBAL DAT_00526458 uint *
// GLOBAL DAT_0052645c undefined4 *
// GLOBAL DAT_00526460 undefined4
// GLOBAL DAT_00526464 uint *
// GLOBAL DAT_00526468 undefined4 *
// GLOBAL DAT_0052646c undefined4

undefined4 func_00526394(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052644c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052644c), iVar1 != 0)) {
    *DAT_00526450 = DAT_00526454;
  }
  if (DAT_00526450 != param_2) {
    if (((*DAT_00526458 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526458), iVar1 != 0)) {
      *DAT_0052645c = DAT_00526460;
    }
    if (DAT_0052645c != param_2) {
      if (((*DAT_00526464 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526464), iVar1 != 0)) {
        *DAT_00526468 = DAT_0052646c;
      }
      if (DAT_00526468 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

