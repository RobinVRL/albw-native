#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00558e78;
extern undefined4 *DAT_00558e7c;
extern undefined4 DAT_00558e80;
extern uint *DAT_00558e84;
extern undefined4 *DAT_00558e88;
extern undefined4 DAT_00558e8c;
extern uint *DAT_00558e90;
extern undefined4 *DAT_00558e94;
extern undefined4 DAT_00558e98;

// USA 00558DC0 <- EU 00558D98 (Ghidra, non-matching)
// GLOBAL DAT_00558e78 uint *
// GLOBAL DAT_00558e7c undefined4 *
// GLOBAL DAT_00558e80 undefined4
// GLOBAL DAT_00558e84 uint *
// GLOBAL DAT_00558e88 undefined4 *
// GLOBAL DAT_00558e8c undefined4
// GLOBAL DAT_00558e90 uint *
// GLOBAL DAT_00558e94 undefined4 *
// GLOBAL DAT_00558e98 undefined4

undefined4 func_00558DC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558e78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558e78), iVar1 != 0)) {
    *DAT_00558e7c = DAT_00558e80;
  }
  if (DAT_00558e7c != param_2) {
    if (((*DAT_00558e84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558e84), iVar1 != 0)) {
      *DAT_00558e88 = DAT_00558e8c;
    }
    if (DAT_00558e88 != param_2) {
      if (((*DAT_00558e90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558e90), iVar1 != 0)) {
        *DAT_00558e94 = DAT_00558e98;
      }
      if (DAT_00558e94 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

