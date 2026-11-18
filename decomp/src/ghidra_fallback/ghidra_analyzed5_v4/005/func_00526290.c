#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00526348;
extern undefined4 *DAT_0052634c;
extern undefined4 DAT_00526350;
extern uint *DAT_00526354;
extern undefined4 *DAT_00526358;
extern undefined4 DAT_0052635c;
extern uint *DAT_00526360;
extern undefined4 *DAT_00526364;
extern undefined4 DAT_00526368;

// USA 00526290 <- EU 00526268 (Ghidra, non-matching)
// GLOBAL DAT_00526348 uint *
// GLOBAL DAT_0052634c undefined4 *
// GLOBAL DAT_00526350 undefined4
// GLOBAL DAT_00526354 uint *
// GLOBAL DAT_00526358 undefined4 *
// GLOBAL DAT_0052635c undefined4
// GLOBAL DAT_00526360 uint *
// GLOBAL DAT_00526364 undefined4 *
// GLOBAL DAT_00526368 undefined4

undefined4 func_00526290(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00526348 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526348), iVar1 != 0)) {
    *DAT_0052634c = DAT_00526350;
  }
  if (DAT_0052634c != param_2) {
    if (((*DAT_00526354 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526354), iVar1 != 0)) {
      *DAT_00526358 = DAT_0052635c;
    }
    if (DAT_00526358 != param_2) {
      if (((*DAT_00526360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526360), iVar1 != 0)) {
        *DAT_00526364 = DAT_00526368;
      }
      if (DAT_00526364 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

