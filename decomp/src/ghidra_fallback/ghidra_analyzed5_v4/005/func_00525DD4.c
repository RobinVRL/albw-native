#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00525e8c;
extern undefined4 *DAT_00525e90;
extern undefined4 DAT_00525e94;
extern uint *DAT_00525e98;
extern undefined4 *DAT_00525e9c;
extern undefined4 DAT_00525ea0;
extern uint *DAT_00525ea4;
extern undefined4 *DAT_00525ea8;
extern undefined4 DAT_00525eac;

// USA 00525DD4 <- EU 00525DAC (Ghidra, non-matching)
// GLOBAL DAT_00525e8c uint *
// GLOBAL DAT_00525e90 undefined4 *
// GLOBAL DAT_00525e94 undefined4
// GLOBAL DAT_00525e98 uint *
// GLOBAL DAT_00525e9c undefined4 *
// GLOBAL DAT_00525ea0 undefined4
// GLOBAL DAT_00525ea4 uint *
// GLOBAL DAT_00525ea8 undefined4 *
// GLOBAL DAT_00525eac undefined4

undefined4 func_00525DD4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00525e8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525e8c), iVar1 != 0)) {
    *DAT_00525e90 = DAT_00525e94;
  }
  if (DAT_00525e90 != param_2) {
    if (((*DAT_00525e98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525e98), iVar1 != 0)) {
      *DAT_00525e9c = DAT_00525ea0;
    }
    if (DAT_00525e9c != param_2) {
      if (((*DAT_00525ea4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525ea4), iVar1 != 0)) {
        *DAT_00525ea8 = DAT_00525eac;
      }
      if (DAT_00525ea8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

