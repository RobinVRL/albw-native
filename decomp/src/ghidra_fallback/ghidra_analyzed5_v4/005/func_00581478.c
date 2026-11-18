#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00581530;
extern undefined4 *DAT_00581534;
extern undefined4 DAT_00581538;
extern uint *DAT_0058153c;
extern undefined4 *DAT_00581540;
extern undefined4 DAT_00581544;
extern uint *DAT_00581548;
extern undefined4 *DAT_0058154c;
extern undefined4 DAT_00581550;

// USA 00581478 <- EU 00581450 (Ghidra, non-matching)
// GLOBAL DAT_00581530 uint *
// GLOBAL DAT_00581534 undefined4 *
// GLOBAL DAT_00581538 undefined4
// GLOBAL DAT_0058153c uint *
// GLOBAL DAT_00581540 undefined4 *
// GLOBAL DAT_00581544 undefined4
// GLOBAL DAT_00581548 uint *
// GLOBAL DAT_0058154c undefined4 *
// GLOBAL DAT_00581550 undefined4

undefined4 func_00581478(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00581530 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581530), iVar1 != 0)) {
    *DAT_00581534 = DAT_00581538;
  }
  if (DAT_00581534 != param_2) {
    if (((*DAT_0058153c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058153c), iVar1 != 0)) {
      *DAT_00581540 = DAT_00581544;
    }
    if (DAT_00581540 != param_2) {
      if (((*DAT_00581548 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581548), iVar1 != 0)) {
        *DAT_0058154c = DAT_00581550;
      }
      if (DAT_0058154c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

