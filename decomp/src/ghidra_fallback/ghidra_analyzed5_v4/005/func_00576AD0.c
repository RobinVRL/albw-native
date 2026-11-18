#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00576b8c;
extern undefined4 *DAT_00576b90;
extern undefined4 DAT_00576b94;
extern uint *DAT_00576b98;
extern undefined4 *DAT_00576b9c;
extern undefined4 DAT_00576ba0;
extern uint *DAT_00576ba4;
extern undefined4 *DAT_00576ba8;
extern undefined4 DAT_00576bac;

// USA 00576AD0 <- EU 00576AA8 (Ghidra, non-matching)
// GLOBAL DAT_00576b8c uint *
// GLOBAL DAT_00576b90 undefined4 *
// GLOBAL DAT_00576b94 undefined4
// GLOBAL DAT_00576b98 uint *
// GLOBAL DAT_00576b9c undefined4 *
// GLOBAL DAT_00576ba0 undefined4
// GLOBAL DAT_00576ba4 uint *
// GLOBAL DAT_00576ba8 undefined4 *
// GLOBAL DAT_00576bac undefined4

undefined4 func_00576AD0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00576b8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576b8c), iVar1 != 0)) {
    *DAT_00576b90 = DAT_00576b94;
  }
  if (DAT_00576b90 != param_2) {
    if (((*DAT_00576b98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576b98), iVar1 != 0)) {
      *DAT_00576b9c = DAT_00576ba0;
    }
    if (DAT_00576b9c != param_2) {
      if (((*DAT_00576ba4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576ba4), iVar1 != 0)) {
        *DAT_00576ba8 = DAT_00576bac;
      }
      if (DAT_00576ba8 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

